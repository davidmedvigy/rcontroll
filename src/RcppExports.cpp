// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// trollCpp
void trollCpp(std::string global_file, std::string climate_file, std::string species_file, std::string day_file, std::string forest_file, std::string output_file);
RcppExport SEXP _rcontroll_trollCpp(SEXP global_fileSEXP, SEXP climate_fileSEXP, SEXP species_fileSEXP, SEXP day_fileSEXP, SEXP forest_fileSEXP, SEXP output_fileSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type global_file(global_fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type climate_file(climate_fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type species_file(species_fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type day_file(day_fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type forest_file(forest_fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type output_file(output_fileSEXP);
    trollCpp(global_file, climate_file, species_file, day_file, forest_file, output_file);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rcontroll_trollCpp", (DL_FUNC) &_rcontroll_trollCpp, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_rcontroll(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
