// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object.hpp"
#include "CvHaarClassifier.pypp.hpp"

namespace bp = boost::python;

struct CvHaarClassifier_wrapper : CvHaarClassifier, bp::wrapper< CvHaarClassifier > {

    CvHaarClassifier_wrapper(CvHaarClassifier const & arg )
    : CvHaarClassifier( arg )
      , bp::wrapper< CvHaarClassifier >(){
        // copy constructor
        
    }

    CvHaarClassifier_wrapper()
    : CvHaarClassifier()
      , bp::wrapper< CvHaarClassifier >(){
        // null constructor
        
    }

    static bp::object get_haar_feature( ::CvHaarClassifier const & inst ){        
        return inst.haar_feature? bp::object(inst.haar_feature): bp::object();
    }

};

void register_CvHaarClassifier_class(){

    bp::class_< CvHaarClassifier_wrapper >( "CvHaarClassifier" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvHaarClassifier >() )    
        .def_readwrite( "count", &CvHaarClassifier::count )    
        .add_property( "haar_feature", bp::make_function(&::CvHaarClassifier_wrapper::get_haar_feature) );

}
