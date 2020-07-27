// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// detect_contours
List detect_contours(NumericVector image, int X, int Y, double Q);
RcppExport SEXP _image_ContourDetector_detect_contours(SEXP imageSEXP, SEXP XSEXP, SEXP YSEXP, SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type image(imageSEXP);
    Rcpp::traits::input_parameter< int >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type Q(QSEXP);
    rcpp_result_gen = Rcpp::wrap(detect_contours(image, X, Y, Q));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_image_ContourDetector_detect_contours", (DL_FUNC) &_image_ContourDetector_detect_contours, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_image_ContourDetector(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
