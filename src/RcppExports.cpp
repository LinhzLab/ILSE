// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// kernel
arma::vec kernel(const arma::vec& z, int Ktype);
RcppExport SEXP _ILSE_kernel(SEXP zSEXP, SEXP KtypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type Ktype(KtypeSEXP);
    rcpp_result_gen = Rcpp::wrap(kernel(z, Ktype));
    return rcpp_result_gen;
END_RCPP
}
// ilse_arma
Rcpp::List ilse_arma(const arma::vec& Y, const arma::mat& X, const arma::vec& beta_int, const double& bw, const int& Ktype, const int& maxIter, const double& eps_be, const double& eps_obj, const bool& verbose);
RcppExport SEXP _ILSE_ilse_arma(SEXP YSEXP, SEXP XSEXP, SEXP beta_intSEXP, SEXP bwSEXP, SEXP KtypeSEXP, SEXP maxIterSEXP, SEXP eps_beSEXP, SEXP eps_objSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta_int(beta_intSEXP);
    Rcpp::traits::input_parameter< const double& >::type bw(bwSEXP);
    Rcpp::traits::input_parameter< const int& >::type Ktype(KtypeSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< const double& >::type eps_be(eps_beSEXP);
    Rcpp::traits::input_parameter< const double& >::type eps_obj(eps_objSEXP);
    Rcpp::traits::input_parameter< const bool& >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(ilse_arma(Y, X, beta_int, bw, Ktype, maxIter, eps_be, eps_obj, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ILSE_kernel", (DL_FUNC) &_ILSE_kernel, 2},
    {"_ILSE_ilse_arma", (DL_FUNC) &_ILSE_ilse_arma, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_ILSE(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
