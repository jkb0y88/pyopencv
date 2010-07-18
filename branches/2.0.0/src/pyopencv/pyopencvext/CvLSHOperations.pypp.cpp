// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvLSHOperations.pypp.hpp"

namespace bp = boost::python;

void register_CvLSHOperations_class(){

    bp::class_< CvLSHOperations, boost::noncopyable >( "CvLSHOperations", bp::no_init )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvLSHOperations >() );

}