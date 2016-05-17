// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// testRandom
NumericVector testRandom(double a);
RcppExport SEXP ggrepel_testRandom(SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    __result = Rcpp::wrap(testRandom(a));
    return __result;
END_RCPP
}
// euclid
double euclid(NumericVector a, NumericVector b);
RcppExport SEXP ggrepel_euclid(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    __result = Rcpp::wrap(euclid(a, b));
    return __result;
END_RCPP
}
// centroid
NumericVector centroid(NumericVector b);
RcppExport SEXP ggrepel_centroid(SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    __result = Rcpp::wrap(centroid(b));
    return __result;
END_RCPP
}
// intersect_line_rectangle
NumericVector intersect_line_rectangle(NumericVector p1, NumericVector p2, NumericVector b);
RcppExport SEXP ggrepel_intersect_line_rectangle(SEXP p1SEXP, SEXP p2SEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p2(p2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    __result = Rcpp::wrap(intersect_line_rectangle(p1, p2, b));
    return __result;
END_RCPP
}
// repel_boxes
DataFrame repel_boxes(NumericMatrix data_points, double pad_point_x, double pad_point_y, NumericMatrix boxes, NumericVector xlim, NumericVector ylim, double force, int maxiter);
RcppExport SEXP ggrepel_repel_boxes(SEXP data_pointsSEXP, SEXP pad_point_xSEXP, SEXP pad_point_ySEXP, SEXP boxesSEXP, SEXP xlimSEXP, SEXP ylimSEXP, SEXP forceSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type data_points(data_pointsSEXP);
    Rcpp::traits::input_parameter< double >::type pad_point_x(pad_point_xSEXP);
    Rcpp::traits::input_parameter< double >::type pad_point_y(pad_point_ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type boxes(boxesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xlim(xlimSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ylim(ylimSEXP);
    Rcpp::traits::input_parameter< double >::type force(forceSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    __result = Rcpp::wrap(repel_boxes(data_points, pad_point_x, pad_point_y, boxes, xlim, ylim, force, maxiter));
    return __result;
END_RCPP
}
