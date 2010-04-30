// This file has been generated by Py++.

#include "boost/python.hpp"
#include "opencv_headers.hpp"
#include "pyopencvext_global_variables.pypp.hpp"

namespace bp = boost::python;

void register_global_variables(){

    bp::scope().attr("BORDER_REPLICATE") = (int)cv::BORDER_REPLICATE;
    bp::scope().attr("BORDER_CONSTANT") = (int)cv::BORDER_CONSTANT;
    bp::scope().attr("BORDER_REFLECT") = (int)cv::BORDER_REFLECT;
    bp::scope().attr("BORDER_REFLECT_101") = (int)cv::BORDER_REFLECT_101;
    bp::scope().attr("BORDER_REFLECT101") = (int)cv::BORDER_REFLECT101;
    bp::scope().attr("BORDER_WRAP") = (int)cv::BORDER_WRAP;
    bp::scope().attr("BORDER_TRANSPARENT") = (int)cv::BORDER_TRANSPARENT;
    bp::scope().attr("BORDER_DEFAULT") = (int)cv::BORDER_DEFAULT;
    bp::scope().attr("BORDER_ISOLATED") = (int)cv::BORDER_ISOLATED;

    bp::scope().attr("KERNEL_GENERAL") = (int)cv::KERNEL_GENERAL;
    bp::scope().attr("KERNEL_SYMMETRICAL") = (int)cv::KERNEL_SYMMETRICAL;
    bp::scope().attr("KERNEL_ASYMMETRICAL") = (int)cv::KERNEL_ASYMMETRICAL;
    bp::scope().attr("KERNEL_SMOOTH") = (int)cv::KERNEL_SMOOTH;
    bp::scope().attr("KERNEL_INTEGER") = (int)cv::KERNEL_INTEGER;

    bp::scope().attr("THRESH_BINARY") = (int)cv::THRESH_BINARY;
    bp::scope().attr("THRESH_BINARY_INV") = (int)cv::THRESH_BINARY_INV;
    bp::scope().attr("THRESH_TRUNC") = (int)cv::THRESH_TRUNC;
    bp::scope().attr("THRESH_TOZERO") = (int)cv::THRESH_TOZERO;
    bp::scope().attr("THRESH_TOZERO_INV") = (int)cv::THRESH_TOZERO_INV;
    bp::scope().attr("THRESH_MASK") = (int)cv::THRESH_MASK;
    bp::scope().attr("THRESH_OTSU") = (int)cv::THRESH_OTSU;

    bp::scope().attr("MAGIC_MASK") = (int)cv::MAGIC_MASK;
    bp::scope().attr("TYPE_MASK") = (int)cv::TYPE_MASK;
    bp::scope().attr("DEPTH_MASK") = (int)cv::DEPTH_MASK;

    bp::scope().attr("GEMM_1_T") = (int)cv::GEMM_1_T;
    bp::scope().attr("GEMM_2_T") = (int)cv::GEMM_2_T;
    bp::scope().attr("GEMM_3_T") = (int)cv::GEMM_3_T;

    bp::scope().attr("DFT_INVERSE") = (int)cv::DFT_INVERSE;
    bp::scope().attr("DFT_SCALE") = (int)cv::DFT_SCALE;
    bp::scope().attr("DFT_ROWS") = (int)cv::DFT_ROWS;
    bp::scope().attr("DFT_COMPLEX_OUTPUT") = (int)cv::DFT_COMPLEX_OUTPUT;
    bp::scope().attr("DFT_REAL_OUTPUT") = (int)cv::DFT_REAL_OUTPUT;
    bp::scope().attr("DCT_INVERSE") = (int)cv::DCT_INVERSE;
    bp::scope().attr("DCT_ROWS") = (int)cv::DCT_ROWS;

    bp::scope().attr("KMEANS_RANDOM_CENTERS") = (int)cv::KMEANS_RANDOM_CENTERS;
    bp::scope().attr("KMEANS_PP_CENTERS") = (int)cv::KMEANS_PP_CENTERS;
    bp::scope().attr("KMEANS_USE_INITIAL_LABELS") = (int)cv::KMEANS_USE_INITIAL_LABELS;

    bp::scope().attr("CMP_EQ") = (int)cv::CMP_EQ;
    bp::scope().attr("CMP_GT") = (int)cv::CMP_GT;
    bp::scope().attr("CMP_GE") = (int)cv::CMP_GE;
    bp::scope().attr("CMP_LT") = (int)cv::CMP_LT;
    bp::scope().attr("CMP_LE") = (int)cv::CMP_LE;
    bp::scope().attr("CMP_NE") = (int)cv::CMP_NE;

    bp::scope().attr("FM_7POINT") = (int)cv::FM_7POINT;
    bp::scope().attr("FM_8POINT") = (int)cv::FM_8POINT;
    bp::scope().attr("FM_LMEDS") = (int)cv::FM_LMEDS;
    bp::scope().attr("FM_RANSAC") = (int)cv::FM_RANSAC;

    bp::scope().attr("FONT_HERSHEY_SIMPLEX") = (int)cv::FONT_HERSHEY_SIMPLEX;
    bp::scope().attr("FONT_HERSHEY_PLAIN") = (int)cv::FONT_HERSHEY_PLAIN;
    bp::scope().attr("FONT_HERSHEY_DUPLEX") = (int)cv::FONT_HERSHEY_DUPLEX;
    bp::scope().attr("FONT_HERSHEY_COMPLEX") = (int)cv::FONT_HERSHEY_COMPLEX;
    bp::scope().attr("FONT_HERSHEY_TRIPLEX") = (int)cv::FONT_HERSHEY_TRIPLEX;
    bp::scope().attr("FONT_HERSHEY_COMPLEX_SMALL") = (int)cv::FONT_HERSHEY_COMPLEX_SMALL;
    bp::scope().attr("FONT_HERSHEY_SCRIPT_SIMPLEX") = (int)cv::FONT_HERSHEY_SCRIPT_SIMPLEX;
    bp::scope().attr("FONT_HERSHEY_SCRIPT_COMPLEX") = (int)cv::FONT_HERSHEY_SCRIPT_COMPLEX;
    bp::scope().attr("FONT_ITALIC") = (int)cv::FONT_ITALIC;

    bp::scope().attr("DECOMP_LU") = (int)cv::DECOMP_LU;
    bp::scope().attr("DECOMP_SVD") = (int)cv::DECOMP_SVD;
    bp::scope().attr("DECOMP_EIG") = (int)cv::DECOMP_EIG;
    bp::scope().attr("DECOMP_CHOLESKY") = (int)cv::DECOMP_CHOLESKY;
    bp::scope().attr("DECOMP_QR") = (int)cv::DECOMP_QR;
    bp::scope().attr("DECOMP_NORMAL") = (int)cv::DECOMP_NORMAL;

    bp::scope().attr("NORM_INF") = (int)cv::NORM_INF;
    bp::scope().attr("NORM_L1") = (int)cv::NORM_L1;
    bp::scope().attr("NORM_L2") = (int)cv::NORM_L2;
    bp::scope().attr("NORM_TYPE_MASK") = (int)cv::NORM_TYPE_MASK;
    bp::scope().attr("NORM_RELATIVE") = (int)cv::NORM_RELATIVE;
    bp::scope().attr("NORM_MINMAX") = (int)cv::NORM_MINMAX;

    bp::scope().attr("GC_BGD") = (int)cv::GC_BGD;
    bp::scope().attr("GC_FGD") = (int)cv::GC_FGD;
    bp::scope().attr("GC_PR_BGD") = (int)cv::GC_PR_BGD;
    bp::scope().attr("GC_PR_FGD") = (int)cv::GC_PR_FGD;

    bp::scope().attr("MORPH_RECT") = (int)cv::MORPH_RECT;
    bp::scope().attr("MORPH_CROSS") = (int)cv::MORPH_CROSS;
    bp::scope().attr("MORPH_ELLIPSE") = (int)cv::MORPH_ELLIPSE;

    bp::scope().attr("FLOODFILL_FIXED_RANGE") = (int)cv::FLOODFILL_FIXED_RANGE;
    bp::scope().attr("FLOODFILL_MASK_ONLY") = (int)cv::FLOODFILL_MASK_ONLY;

    bp::scope().attr("INPAINT_NS") = (int)cv::INPAINT_NS;
    bp::scope().attr("INPAINT_TELEA") = (int)cv::INPAINT_TELEA;

    bp::scope().attr("CALIB_USE_INTRINSIC_GUESS") = (int)cv::CALIB_USE_INTRINSIC_GUESS;
    bp::scope().attr("CALIB_FIX_ASPECT_RATIO") = (int)cv::CALIB_FIX_ASPECT_RATIO;
    bp::scope().attr("CALIB_FIX_PRINCIPAL_POINT") = (int)cv::CALIB_FIX_PRINCIPAL_POINT;
    bp::scope().attr("CALIB_ZERO_TANGENT_DIST") = (int)cv::CALIB_ZERO_TANGENT_DIST;
    bp::scope().attr("CALIB_FIX_FOCAL_LENGTH") = (int)cv::CALIB_FIX_FOCAL_LENGTH;
    bp::scope().attr("CALIB_FIX_K1") = (int)cv::CALIB_FIX_K1;
    bp::scope().attr("CALIB_FIX_K2") = (int)cv::CALIB_FIX_K2;
    bp::scope().attr("CALIB_FIX_K3") = (int)cv::CALIB_FIX_K3;
    bp::scope().attr("CALIB_FIX_INTRINSIC") = (int)cv::CALIB_FIX_INTRINSIC;
    bp::scope().attr("CALIB_SAME_FOCAL_LENGTH") = (int)cv::CALIB_SAME_FOCAL_LENGTH;
    bp::scope().attr("CALIB_ZERO_DISPARITY") = (int)cv::CALIB_ZERO_DISPARITY;

    bp::scope().attr("CALIB_CB_ADAPTIVE_THRESH") = (int)cv::CALIB_CB_ADAPTIVE_THRESH;
    bp::scope().attr("CALIB_CB_NORMALIZE_IMAGE") = (int)cv::CALIB_CB_NORMALIZE_IMAGE;
    bp::scope().attr("CALIB_CB_FILTER_QUADS") = (int)cv::CALIB_CB_FILTER_QUADS;

    bp::scope().attr("MORPH_ERODE") = (int)cv::MORPH_ERODE;
    bp::scope().attr("MORPH_DILATE") = (int)cv::MORPH_DILATE;
    bp::scope().attr("MORPH_OPEN") = (int)cv::MORPH_OPEN;
    bp::scope().attr("MORPH_CLOSE") = (int)cv::MORPH_CLOSE;
    bp::scope().attr("MORPH_GRADIENT") = (int)cv::MORPH_GRADIENT;
    bp::scope().attr("MORPH_TOPHAT") = (int)cv::MORPH_TOPHAT;
    bp::scope().attr("MORPH_BLACKHAT") = (int)cv::MORPH_BLACKHAT;

    bp::scope().attr("INTER_NEAREST") = (int)cv::INTER_NEAREST;
    bp::scope().attr("INTER_LINEAR") = (int)cv::INTER_LINEAR;
    bp::scope().attr("INTER_CUBIC") = (int)cv::INTER_CUBIC;
    bp::scope().attr("INTER_AREA") = (int)cv::INTER_AREA;
    bp::scope().attr("INTER_LANCZOS4") = (int)cv::INTER_LANCZOS4;
    bp::scope().attr("INTER_MAX") = (int)cv::INTER_MAX;
    bp::scope().attr("WARP_INVERSE_MAP") = (int)cv::WARP_INVERSE_MAP;

    bp::scope().attr("ADAPTIVE_THRESH_MEAN_C") = (int)cv::ADAPTIVE_THRESH_MEAN_C;
    bp::scope().attr("ADAPTIVE_THRESH_GAUSSIAN_C") = (int)cv::ADAPTIVE_THRESH_GAUSSIAN_C;

    bp::scope().attr("OPTFLOW_USE_INITIAL_FLOW") = (int)cv::OPTFLOW_USE_INITIAL_FLOW;
    bp::scope().attr("OPTFLOW_FARNEBACK_GAUSSIAN") = (int)cv::OPTFLOW_FARNEBACK_GAUSSIAN;

    bp::scope().attr("GC_INIT_WITH_RECT") = (int)cv::GC_INIT_WITH_RECT;
    bp::scope().attr("GC_INIT_WITH_MASK") = (int)cv::GC_INIT_WITH_MASK;
    bp::scope().attr("GC_EVAL") = (int)cv::GC_EVAL;

    bp::scope().attr("TM_SQDIFF") = (int)cv::TM_SQDIFF;
    bp::scope().attr("TM_SQDIFF_NORMED") = (int)cv::TM_SQDIFF_NORMED;
    bp::scope().attr("TM_CCORR") = (int)cv::TM_CCORR;
    bp::scope().attr("TM_CCORR_NORMED") = (int)cv::TM_CCORR_NORMED;
    bp::scope().attr("TM_CCOEFF") = (int)cv::TM_CCOEFF;
    bp::scope().attr("TM_CCOEFF_NORMED") = (int)cv::TM_CCOEFF_NORMED;

    bp::scope().attr("RETR_EXTERNAL") = (int)cv::RETR_EXTERNAL;
    bp::scope().attr("RETR_LIST") = (int)cv::RETR_LIST;
    bp::scope().attr("RETR_CCOMP") = (int)cv::RETR_CCOMP;
    bp::scope().attr("RETR_TREE") = (int)cv::RETR_TREE;

    bp::scope().attr("CHAIN_APPROX_NONE") = (int)cv::CHAIN_APPROX_NONE;
    bp::scope().attr("CHAIN_APPROX_SIMPLE") = (int)cv::CHAIN_APPROX_SIMPLE;
    bp::scope().attr("CHAIN_APPROX_TC89_L1") = (int)cv::CHAIN_APPROX_TC89_L1;
    bp::scope().attr("CHAIN_APPROX_TC89_KCOS") = (int)cv::CHAIN_APPROX_TC89_KCOS;

    bp::scope().attr("LMEDS") = (int)cv::LMEDS;
    bp::scope().attr("RANSAC") = (int)cv::RANSAC;

}
