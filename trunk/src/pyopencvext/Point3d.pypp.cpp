// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "ndarray.hpp"
#include "point3d.pypp.hpp"

namespace bp = boost::python;

void register_Point3d_class(){

    { //::cv::Point3_< double >
        typedef bp::class_< cv::Point3_< double > > Point3d_exposer_t;
        Point3d_exposer_t Point3d_exposer = Point3d_exposer_t( "Point3d", bp::init< >() );
        bp::scope Point3d_scope( Point3d_exposer );
        Point3d_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Point3_< double > >() );
        Point3d_exposer.def( bp::init< double, double, double >(( bp::arg("_x"), bp::arg("_y"), bp::arg("_z") )) );
        Point3d_exposer.def( bp::init< cv::Point3_< double > const & >(( bp::arg("pt") )) );
        Point3d_exposer.def( bp::init< cv::Point_< double > const & >(( bp::arg("pt") )) );
        bp::implicitly_convertible< cv::Point_< double > const &, cv::Point3_< double > >();
        Point3d_exposer.def( bp::init< cv::Vec< double, 3 > const & >(( bp::arg("v") )) );
        bp::implicitly_convertible< cv::Vec< double, 3 > const &, cv::Point3_< double > >();
        { //::cv::Point3_< double >::ddot
        
            typedef cv::Point3_< double > exported_class_t;
            typedef double ( exported_class_t::*ddot_function_type )( ::cv::Point3_< double > const & ) const;
            
            Point3d_exposer.def( 
                "ddot"
                , ddot_function_type( &::cv::Point3_< double >::ddot )
                , ( bp::arg("pt") ) );
        
        }
        { //::cv::Point3_< double >::dot
        
            typedef cv::Point3_< double > exported_class_t;
            typedef double ( exported_class_t::*dot_function_type )( ::cv::Point3_< double > const & ) const;
            
            Point3d_exposer.def( 
                "dot"
                , dot_function_type( &::cv::Point3_< double >::dot )
                , ( bp::arg("pt") ) );
        
        }
        Point3d_exposer.def( "as_Vec3d", &cv::Point3_< double >::operator ::cv::Vec< double, 3 >  );
        { //::cv::Point3_< double >::operator=
        
            typedef cv::Point3_< double > exported_class_t;
            typedef ::cv::Point3_< double > & ( exported_class_t::*assign_function_type )( ::cv::Point3_< double > const & ) ;
            
            Point3d_exposer.def( 
                "assign"
                , assign_function_type( &::cv::Point3_< double >::operator= )
                , ( bp::arg("pt") )
                , bp::return_self< >() );
        
        }
        Point3d_exposer.def_readwrite( "x", &cv::Point3_< double >::x );
        Point3d_exposer.def_readwrite( "y", &cv::Point3_< double >::y );
        Point3d_exposer.def_readwrite( "z", &cv::Point3_< double >::z );
        Point3d_exposer.def("from_ndarray", &bp::from_ndarray< cv::Point3d > );
        Point3d_exposer.staticmethod("from_ndarray");
        Point3d_exposer.add_property("ndarray", &bp::as_ndarray< cv::Point3d >);
    }

}
