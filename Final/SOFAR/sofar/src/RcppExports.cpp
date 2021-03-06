// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// sofar_procrustes_RCpp
Rcpp::List sofar_procrustes_RCpp(arma::mat XY, arma::mat XX, arma::mat D, double rho2, arma::mat U, Rcpp::List control);
RcppExport SEXP sofar_sofar_procrustes_RCpp(SEXP XYSEXP, SEXP XXSEXP, SEXP DSEXP, SEXP rho2SEXP, SEXP USEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type XY(XYSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type XX(XXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type D(DSEXP);
    Rcpp::traits::input_parameter< double >::type rho2(rho2SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type U(USEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(sofar_procrustes_RCpp(XY, XX, D, rho2, U, control));
    return rcpp_result_gen;
END_RCPP
}
// kron_RcppArma
arma::mat kron_RcppArma(arma::mat A, arma::mat B);
RcppExport SEXP sofar_kron_RcppArma(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(kron_RcppArma(A, B));
    return rcpp_result_gen;
END_RCPP
}
