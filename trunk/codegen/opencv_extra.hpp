#ifndef SDOPENCV_EXTRA_H
#define SDOPENCV_EXTRA_H

#include <vector>

#include "boost/python.hpp"
#include "boost/python/object.hpp"
#include "boost/python/str.hpp"
#include "boost/python/tuple.hpp"
#include "boost/python/to_python_value.hpp"

#include "opencv_headers.hpp"

namespace bp = boost::python;

#define BOOST_PYTHON_MAX_ARITY 30

CV_INLINE CvPyramid sdCreatePyramid( const CvArr* img, int extra_layers, double rate,
                                const CvSize* layer_sizes CV_DEFAULT(0),
                                CvArr* bufarr CV_DEFAULT(0),
                                int calc CV_DEFAULT(1),
                                int filter CV_DEFAULT(CV_GAUSSIAN_5x5) )
{
    CvPyramid pyr;
    pyr.pyramid = cvCreatePyramid(img, extra_layers, rate, layer_sizes, bufarr, calc, filter);
    pyr.extra_layers = extra_layers;
    return pyr;
}


void CV_CDECL sdTrackbarCallback2(int pos, void* userdata);
void CV_CDECL sdMouseCallback(int event, int x, int y, int flags, void* param);
float CV_CDECL sdDistanceFunction( const float* a, const float*b, void* user_param );

// ================================================================================================

// cvtypeof
template<typename T>
inline int cvtypeof()
{
    const char message[] = "Instantiation of function cvtypeof() for the given class is not yet implemented.";
    PyErr_SetString(PyExc_NotImplementedError, message);
    throw bp::error_already_set(); 
}

template<> inline int cvtypeof<char>() { return CV_8S; }
template<> inline int cvtypeof<unsigned char>() { return CV_8U; }
template<> inline int cvtypeof<short>() { return CV_16S; }
template<> inline int cvtypeof<unsigned short>() { return CV_16U; }
template<> inline int cvtypeof<long>() { return CV_32S; }
template<> inline int cvtypeof<int>() { return CV_32S; }
template<> inline int cvtypeof<float>() { return CV_32F; }
template<> inline int cvtypeof<double>() { return CV_64F; }

// ================================================================================================

// convert_Mat
template<typename T>
void convert_Mat( const cv::Mat &in_arr, T &out_arr )
{
    const char message[] = "Instantiation of function convert_Mat() for the given class is not yet implemented.";
    PyErr_SetString(PyExc_NotImplementedError, message);
    throw bp::error_already_set(); 
}

template<typename T>
void convert_Mat( const T &in_arr, cv::Mat &out_arr )
{
    const char message[] = "Instantiation of function convert_Mat() for the given class is not yet implemented.";
    PyErr_SetString(PyExc_NotImplementedError, message);
    throw bp::error_already_set(); 
}

// convert_Mat, T * case
// Only from Mat to T* is implemented. The converse direction is UNSAFE.
template<typename T>
void convert_Mat( const cv::Mat &in_arr, T *&out_arr )
{
    char s[100];
    if(!in_arr.flags) { out_arr = 0; return; }
    
    if(in_arr.rows != 1)
    {
        sprintf(s, "Mat must be a row vector, rows=%d detected.", in_arr.rows);
        PyErr_SetString(PyExc_TypeError, s);
        throw bp::error_already_set(); 
    }
    if(in_arr.channels() != 1)
    {
        sprintf(s, "Mat must be single-channel, nchannels=%d detected.", in_arr.channels());
        PyErr_SetString(PyExc_TypeError, s);
        throw bp::error_already_set(); 
    }
    if(in_arr.type() != cvtypeof<T>())
    {
        sprintf(s, "cv::Mat's element type is not the same as that of the output array. cv::Mat's type=%d, vector's type=%d.", in_arr.type(), cvtypeof<T>());
        PyErr_SetString(PyExc_TypeError, s);
        throw bp::error_already_set(); 
    }
    
    out_arr = (T *)in_arr.data;
}

extern template void convert_Mat( const cv::Mat &in_arr, char *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, unsigned char *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, short *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, unsigned short *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, long *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, unsigned long *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, int *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, unsigned int *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, float *&out_arr );
extern template void convert_Mat( const cv::Mat &in_arr, double *&out_arr );

// ================================================================================================

// convert_seq_to_vector
template<typename T>
void convert_seq_to_vector( const bp::object &in_arr, std::vector<T> &out_arr )
{
    out_arr.clear();
    if(in_arr.ptr() == Py_None) return;
    int len = bp::len(in_arr);
    if(!len) return;
    out_arr.resize(len);
    for(int i = 0; i < len; ++i) out_arr[i] = bp::extract<T>(in_arr[i]);
}

// convert_vector_to_seq
template<typename T>
bp::tuple convert_vector_to_seq( const std::vector<T> &in_arr )
{
    bp::list out_arr;
    int len = in_arr.size();
    if(!len) return bp::tuple();
    for(int i = 0; i < len; ++i) out_arr.append(bp::object(in_arr[i]));
    return bp::tuple(out_arr);
}

#define DECLARE_SEQUENCE_FOR_VECTOR(CLASS) \
extern template void convert_seq_to_vector( const bp::object &in_arr, std::vector<CLASS> &out_arr ); \
extern template bp::tuple convert_vector_to_seq( const std::vector<CLASS> &in_arr ); \
 \
namespace boost { namespace python { \
 \
struct vector_##CLASS##_to_python \
{ \
    static PyObject* convert(std::vector<CLASS> const& x) \
    { \
        return bp::incref(convert_vector_to_seq(x).ptr()); \
    } \
}; \
 \
}}

#define DEFINE_SEQUENCE_FOR_VECTOR(CLASS) \
template void convert_seq_to_vector( const bp::object &in_arr, std::vector<CLASS> &out_arr ); \
template bp::tuple convert_vector_to_seq( const std::vector<CLASS> &in_arr );

#define DECLARE_SEQUENCE_FOR_VECTOR_NS(NS, CLASS) \
extern template void convert_seq_to_vector( const bp::object &in_arr, std::vector<NS::CLASS> &out_arr ); \
extern template bp::tuple convert_vector_to_seq( const std::vector<NS::CLASS> &in_arr ); \
 \
namespace boost { namespace python { \
 \
struct vector_##CLASS##_to_python \
{ \
    static PyObject* convert(std::vector<NS::CLASS> const& x) \
    { \
        return bp::incref(convert_vector_to_seq(x).ptr()); \
    } \
}; \
 \
}}

#define DEFINE_SEQUENCE_FOR_VECTOR_NS(NS, CLASS) \
template void convert_seq_to_vector( const bp::object &in_arr, std::vector<NS::CLASS> &out_arr ); \
template bp::tuple convert_vector_to_seq( const std::vector<NS::CLASS> &in_arr );

DECLARE_SEQUENCE_FOR_VECTOR(bool)
DECLARE_SEQUENCE_FOR_VECTOR(char)
DECLARE_SEQUENCE_FOR_VECTOR(uchar)
DECLARE_SEQUENCE_FOR_VECTOR(short)
DECLARE_SEQUENCE_FOR_VECTOR(ushort)
DECLARE_SEQUENCE_FOR_VECTOR(int)
DECLARE_SEQUENCE_FOR_VECTOR(unsigned)
DECLARE_SEQUENCE_FOR_VECTOR(float)
DECLARE_SEQUENCE_FOR_VECTOR(double)
DECLARE_SEQUENCE_FOR_VECTOR_NS(cv, Vec2f)
DECLARE_SEQUENCE_FOR_VECTOR_NS(cv, Vec3f)
DECLARE_SEQUENCE_FOR_VECTOR_NS(cv, Vec4i)
DECLARE_SEQUENCE_FOR_VECTOR_NS(cv, Scalar)
DECLARE_SEQUENCE_FOR_VECTOR_NS(cv, Point2i)
DECLARE_SEQUENCE_FOR_VECTOR_NS(cv, Point2f)
DECLARE_SEQUENCE_FOR_VECTOR_NS(cv, Point3i)
DECLARE_SEQUENCE_FOR_VECTOR_NS(cv, Point3f)
DECLARE_SEQUENCE_FOR_VECTOR_NS(cv, Mat)
DECLARE_SEQUENCE_FOR_VECTOR_NS(cv, MatND)
DECLARE_SEQUENCE_FOR_VECTOR_NS(cv, KeyPoint)



// vector<cv::FernClassifier::Feature, std::allocator<cv::FernClassifier::Feature>
// vector<cv::Octree::Node, std::allocator<cv::Octree::Node> > --- ::std::vector<cv
// vector<CvFuzzyRule*, std::allocator<CvFuzzyRule*> > --- ::std::vector<CvFuzzyRul
// vector<CvFuzzyCurve, std::allocator<CvFuzzyCurve> > --- ::std::vector<CvFuzzyCur
// vector<CvFuzzyPoint, std::allocator<CvFuzzyPoint> > --- ::std::vector<CvFuzzyPoi
// vector<cv::CascadeClassifier::DTreeNode, std::allocator<cv::CascadeClassifier::D
// vector<cv::CascadeClassifier::DTree, std::allocator<cv::CascadeClassifier::DTree
// vector<cv::CascadeClassifier::Stage, std::allocator<cv::CascadeClassifier::Stage
// vector<unsigned char*, std::allocator<unsigned char*> > --- ::std::vector<unsign
// vector<cv::KDTree::Node, std::allocator<cv::KDTree::Node> > --- ::std::vector<cv


// ================================================================================================

// convert_seq_to_vector_vector
template<typename T>
void convert_seq_to_vector_vector( const bp::object &in_arr, std::vector < std::vector < T > > &out_arr )
{
    out_arr.clear();
    if(in_arr.ptr() == Py_None) return;
    int len = bp::len(in_arr);
    if(!len) return;
    out_arr.resize(len);
    for(int i = 0; i < len; ++i) convert_seq_to_vector(in_arr[i], out_arr[i]);
}

// convert_vector_vector_to_seq
template<typename T>
bp::tuple convert_vector_vector_to_seq( const std::vector < std::vector < T > > &in_arr )
{
    bp::list out_arr;
    int len = in_arr.size();
    if(!len) return bp::tuple();
    for(int i = 0; i < len; ++i) out_arr.append(convert_vector_to_seq(in_arr[i]));
    return bp::tuple(out_arr);
}

#define DECLARE_SEQUENCE_FOR_VECTOR_VECTOR(CLASS) \
extern template void convert_seq_to_vector_vector( const bp::object &in_arr, std::vector< std::vector< CLASS > > &out_arr ); \
extern template bp::tuple convert_vector_to_seq( const std::vector< std::vector< CLASS > > &in_arr ); \
 \
namespace boost { namespace python { \
 \
struct vector_vector_##CLASS##_to_python \
{ \
    static PyObject* convert(std::vector< std::vector< CLASS > > const& x) \
    { \
        return bp::incref(convert_vector_vector_to_seq(x).ptr()); \
    } \
}; \
 \
}}

#define DEFINE_SEQUENCE_FOR_VECTOR_VECTOR(CLASS) \
template void convert_seq_to_vector_vector( const bp::object &in_arr, std::vector< std::vector< CLASS > > &out_arr ); \
template bp::tuple convert_vector_to_seq( const std::vector< std::vector< CLASS > > &in_arr );

DECLARE_SEQUENCE_FOR_VECTOR_VECTOR(int)
DECLARE_SEQUENCE_FOR_VECTOR_VECTOR(float)

#define DECLARE_SEQUENCE_FOR_VECTOR_VECTOR_NS(NS, CLASS) \
extern template void convert_seq_to_vector_vector( const bp::object &in_arr, std::vector< std::vector< NS::CLASS > > &out_arr ); \
extern template bp::tuple convert_vector_to_seq( const std::vector< std::vector< NS::CLASS > > &in_arr ); \
 \
namespace boost { namespace python { \
 \
struct vector_vector_##CLASS##_to_python \
{ \
    static PyObject* convert(std::vector< std::vector< NS::CLASS > > const& x) \
    { \
        return bp::incref(convert_vector_vector_to_seq(x).ptr()); \
    } \
}; \
 \
}}

#define DEFINE_SEQUENCE_FOR_VECTOR_VECTOR_NS(NS, CLASS) \
template void convert_seq_to_vector_vector( const bp::object &in_arr, std::vector< std::vector< NS::CLASS > > &out_arr ); \
template bp::tuple convert_vector_to_seq( const std::vector< std::vector< NS::CLASS > > &in_arr );

DECLARE_SEQUENCE_FOR_VECTOR_VECTOR_NS(cv, Point2f)
DECLARE_SEQUENCE_FOR_VECTOR_VECTOR_NS(cv, Point3f)


#endif