// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object.hpp"
#include "boost/python/str.hpp"
#include "CvChain.pypp.hpp"

namespace bp = boost::python;

static ::CvSeq * get_h_prev( ::CvChain const & inst ) { return inst.h_prev; }

static ::CvSeq * get_h_next( ::CvChain const & inst ) { return inst.h_next; }

static ::CvSeq * get_v_prev( ::CvChain const & inst ) { return inst.v_prev; }

static ::CvSeq * get_v_next( ::CvChain const & inst ) { return inst.v_next; }

static ::CvSeqBlock * get_free_blocks( ::CvChain const & inst ) { return inst.free_blocks; }

static ::CvSeqBlock * get_first( ::CvChain const & inst ) { return inst.first; }

static bp::object get_block_max( ::CvChain const & inst ){        
    return inst.block_max? bp::str(inst.block_max): bp::object();
}

static bp::object get_ptr( ::CvChain const & inst ){        
    return inst.ptr? bp::str(inst.ptr): bp::object();
}

static cv::MemStorage get_storage(CvChain const &inst) { return cv::MemStorage(inst.storage); }

void register_CvChain_class(){

    bp::class_< CvChain >( "CvChain" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvChain >() )    
        .def_readwrite( "delta_elems", &CvChain::delta_elems )    
        .def_readwrite( "elem_size", &CvChain::elem_size )    
        .def_readwrite( "flags", &CvChain::flags )    
        .def_readwrite( "header_size", &CvChain::header_size )    
        .def_readwrite( "origin", &CvChain::origin )    
        .def_readwrite( "total", &CvChain::total )    
        .add_property( "h_prev", bp::make_function(&::get_h_prev, bp::return_internal_reference<>()) )    
        .add_property( "h_next", bp::make_function(&::get_h_next, bp::return_internal_reference<>()) )    
        .add_property( "v_prev", bp::make_function(&::get_v_prev, bp::return_internal_reference<>()) )    
        .add_property( "v_next", bp::make_function(&::get_v_next, bp::return_internal_reference<>()) )    
        .add_property( "free_blocks", bp::make_function(&::get_free_blocks, bp::return_internal_reference<>()) )    
        .add_property( "first", bp::make_function(&::get_first, bp::return_internal_reference<>()) )    
        .add_property( "block_max", &::get_block_max )    
        .add_property( "ptr", &::get_ptr )    
        .add_property( "storage", bp::make_function(&::get_storage, bp::with_custodian_and_ward_postcall<0, 1>()) );

}
