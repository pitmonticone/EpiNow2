// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;


RcppExport SEXP _rcpp_module_boot_stan_fit4estimate_infections_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4estimate_secondary_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4estimate_truncation_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4exp_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4gamma_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4lnorm_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4simulate_infections_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4simulate_secondary_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4tune_inv_gamma_mod();

static const R_CallMethodDef CallEntries[] = {
    {"_rcpp_module_boot_stan_fit4estimate_infections_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4estimate_infections_mod, 0},
    {"_rcpp_module_boot_stan_fit4estimate_secondary_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4estimate_secondary_mod, 0},
    {"_rcpp_module_boot_stan_fit4estimate_truncation_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4estimate_truncation_mod, 0},
    {"_rcpp_module_boot_stan_fit4exp_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4exp_mod, 0},
    {"_rcpp_module_boot_stan_fit4gamma_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4gamma_mod, 0},
    {"_rcpp_module_boot_stan_fit4lnorm_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4lnorm_mod, 0},
    {"_rcpp_module_boot_stan_fit4simulate_infections_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4simulate_infections_mod, 0},
    {"_rcpp_module_boot_stan_fit4simulate_secondary_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4simulate_secondary_mod, 0},
    {"_rcpp_module_boot_stan_fit4tune_inv_gamma_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4tune_inv_gamma_mod, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_EpiNow2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
