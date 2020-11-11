// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_QF_RCPPEXPORTS_H_GEN_
#define RCPP_QF_RCPPEXPORTS_H_GEN_

#include <RcppGSL.h>
#include <Rcpp.h>

namespace QF {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("QF", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("QF", "_QF_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in QF");
            }
        }
    }

    inline List Mellin_QF(NumericVector lambdas, std::vector<double> a_k, int maxit, double h, std::complex<double> delta, double eps, double beta) {
        typedef SEXP(*Ptr_Mellin_QF)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_Mellin_QF p_Mellin_QF = NULL;
        if (p_Mellin_QF == NULL) {
            validateSignature("List(*Mellin_QF)(NumericVector,std::vector<double>,int,double,std::complex<double>,double,double)");
            p_Mellin_QF = (Ptr_Mellin_QF)R_GetCCallable("QF", "_QF_Mellin_QF");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_Mellin_QF(Shield<SEXP>(Rcpp::wrap(lambdas)), Shield<SEXP>(Rcpp::wrap(a_k)), Shield<SEXP>(Rcpp::wrap(maxit)), Shield<SEXP>(Rcpp::wrap(h)), Shield<SEXP>(Rcpp::wrap(delta)), Shield<SEXP>(Rcpp::wrap(eps)), Shield<SEXP>(Rcpp::wrap(beta)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<List >(rcpp_result_gen);
    }

    inline List Mellin_QF_error(NumericVector lambdas, std::vector<double> a_k, int maxit, double h, std::complex<double> delta, double eps, double beta, std::vector<double> q_lims) {
        typedef SEXP(*Ptr_Mellin_QF_error)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_Mellin_QF_error p_Mellin_QF_error = NULL;
        if (p_Mellin_QF_error == NULL) {
            validateSignature("List(*Mellin_QF_error)(NumericVector,std::vector<double>,int,double,std::complex<double>,double,double,std::vector<double>)");
            p_Mellin_QF_error = (Ptr_Mellin_QF_error)R_GetCCallable("QF", "_QF_Mellin_QF_error");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_Mellin_QF_error(Shield<SEXP>(Rcpp::wrap(lambdas)), Shield<SEXP>(Rcpp::wrap(a_k)), Shield<SEXP>(Rcpp::wrap(maxit)), Shield<SEXP>(Rcpp::wrap(h)), Shield<SEXP>(Rcpp::wrap(delta)), Shield<SEXP>(Rcpp::wrap(eps)), Shield<SEXP>(Rcpp::wrap(beta)), Shield<SEXP>(Rcpp::wrap(q_lims)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<List >(rcpp_result_gen);
    }

    inline double find_maximum_error(std::vector<double> range_f_ref, std::vector<double> range_F_ref, std::vector<double> range_f_new, std::vector<double> range_F_new) {
        typedef SEXP(*Ptr_find_maximum_error)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_find_maximum_error p_find_maximum_error = NULL;
        if (p_find_maximum_error == NULL) {
            validateSignature("double(*find_maximum_error)(std::vector<double>,std::vector<double>,std::vector<double>,std::vector<double>)");
            p_find_maximum_error = (Ptr_find_maximum_error)R_GetCCallable("QF", "_QF_find_maximum_error");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_find_maximum_error(Shield<SEXP>(Rcpp::wrap(range_f_ref)), Shield<SEXP>(Rcpp::wrap(range_F_ref)), Shield<SEXP>(Rcpp::wrap(range_f_new)), Shield<SEXP>(Rcpp::wrap(range_F_new)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline List Mellin_QF_ratio(NumericVector lambdas_1, NumericVector lambdas_2, std::vector<double> a_k_1, std::vector<double> a_k_2, int maxit, double h, std::complex<double> delta, double eps, double beta_1, double beta_2) {
        typedef SEXP(*Ptr_Mellin_QF_ratio)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_Mellin_QF_ratio p_Mellin_QF_ratio = NULL;
        if (p_Mellin_QF_ratio == NULL) {
            validateSignature("List(*Mellin_QF_ratio)(NumericVector,NumericVector,std::vector<double>,std::vector<double>,int,double,std::complex<double>,double,double,double)");
            p_Mellin_QF_ratio = (Ptr_Mellin_QF_ratio)R_GetCCallable("QF", "_QF_Mellin_QF_ratio");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_Mellin_QF_ratio(Shield<SEXP>(Rcpp::wrap(lambdas_1)), Shield<SEXP>(Rcpp::wrap(lambdas_2)), Shield<SEXP>(Rcpp::wrap(a_k_1)), Shield<SEXP>(Rcpp::wrap(a_k_2)), Shield<SEXP>(Rcpp::wrap(maxit)), Shield<SEXP>(Rcpp::wrap(h)), Shield<SEXP>(Rcpp::wrap(delta)), Shield<SEXP>(Rcpp::wrap(eps)), Shield<SEXP>(Rcpp::wrap(beta_1)), Shield<SEXP>(Rcpp::wrap(beta_2)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<List >(rcpp_result_gen);
    }

    inline List Mellin_QF_ratio_error(NumericVector lambdas_1, NumericVector lambdas_2, std::vector<double> a_k_1, std::vector<double> a_k_2, int maxit, double h, std::complex<double> delta, double eps, double beta_1, double beta_2, std::vector<double> q_lims) {
        typedef SEXP(*Ptr_Mellin_QF_ratio_error)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_Mellin_QF_ratio_error p_Mellin_QF_ratio_error = NULL;
        if (p_Mellin_QF_ratio_error == NULL) {
            validateSignature("List(*Mellin_QF_ratio_error)(NumericVector,NumericVector,std::vector<double>,std::vector<double>,int,double,std::complex<double>,double,double,double,std::vector<double>)");
            p_Mellin_QF_ratio_error = (Ptr_Mellin_QF_ratio_error)R_GetCCallable("QF", "_QF_Mellin_QF_ratio_error");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_Mellin_QF_ratio_error(Shield<SEXP>(Rcpp::wrap(lambdas_1)), Shield<SEXP>(Rcpp::wrap(lambdas_2)), Shield<SEXP>(Rcpp::wrap(a_k_1)), Shield<SEXP>(Rcpp::wrap(a_k_2)), Shield<SEXP>(Rcpp::wrap(maxit)), Shield<SEXP>(Rcpp::wrap(h)), Shield<SEXP>(Rcpp::wrap(delta)), Shield<SEXP>(Rcpp::wrap(eps)), Shield<SEXP>(Rcpp::wrap(beta_1)), Shield<SEXP>(Rcpp::wrap(beta_2)), Shield<SEXP>(Rcpp::wrap(q_lims)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<List >(rcpp_result_gen);
    }

    inline std::complex<double> pochhammer_complex(std::complex<double> x, std::complex<double> y) {
        typedef SEXP(*Ptr_pochhammer_complex)(SEXP,SEXP);
        static Ptr_pochhammer_complex p_pochhammer_complex = NULL;
        if (p_pochhammer_complex == NULL) {
            validateSignature("std::complex<double>(*pochhammer_complex)(std::complex<double>,std::complex<double>)");
            p_pochhammer_complex = (Ptr_pochhammer_complex)R_GetCCallable("QF", "_QF_pochhammer_complex");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_pochhammer_complex(Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(y)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::complex<double> >(rcpp_result_gen);
    }

    inline std::complex<double> beta_complex(std::complex<double> a, std::complex<double> b) {
        typedef SEXP(*Ptr_beta_complex)(SEXP,SEXP);
        static Ptr_beta_complex p_beta_complex = NULL;
        if (p_beta_complex == NULL) {
            validateSignature("std::complex<double>(*beta_complex)(std::complex<double>,std::complex<double>)");
            p_beta_complex = (Ptr_beta_complex)R_GetCCallable("QF", "_QF_beta_complex");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_beta_complex(Shield<SEXP>(Rcpp::wrap(a)), Shield<SEXP>(Rcpp::wrap(b)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::complex<double> >(rcpp_result_gen);
    }

    inline std::complex<double> gamma_complex(std::complex<double> n) {
        typedef SEXP(*Ptr_gamma_complex)(SEXP);
        static Ptr_gamma_complex p_gamma_complex = NULL;
        if (p_gamma_complex == NULL) {
            validateSignature("std::complex<double>(*gamma_complex)(std::complex<double>)");
            p_gamma_complex = (Ptr_gamma_complex)R_GetCCallable("QF", "_QF_gamma_complex");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_gamma_complex(Shield<SEXP>(Rcpp::wrap(n)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::complex<double> >(rcpp_result_gen);
    }

    inline std::vector<double> compute_ak_nc(NumericVector lambdas, NumericVector etas, int maxit, double eps, double beta) {
        typedef SEXP(*Ptr_compute_ak_nc)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_compute_ak_nc p_compute_ak_nc = NULL;
        if (p_compute_ak_nc == NULL) {
            validateSignature("std::vector<double>(*compute_ak_nc)(NumericVector,NumericVector,int,double,double)");
            p_compute_ak_nc = (Ptr_compute_ak_nc)R_GetCCallable("QF", "_QF_compute_ak_nc");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_compute_ak_nc(Shield<SEXP>(Rcpp::wrap(lambdas)), Shield<SEXP>(Rcpp::wrap(etas)), Shield<SEXP>(Rcpp::wrap(maxit)), Shield<SEXP>(Rcpp::wrap(eps)), Shield<SEXP>(Rcpp::wrap(beta)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::vector<double> >(rcpp_result_gen);
    }

    inline std::vector<double> compute_ak_c(NumericVector lambdas, int maxit, double eps, double beta) {
        typedef SEXP(*Ptr_compute_ak_c)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_compute_ak_c p_compute_ak_c = NULL;
        if (p_compute_ak_c == NULL) {
            validateSignature("std::vector<double>(*compute_ak_c)(NumericVector,int,double,double)");
            p_compute_ak_c = (Ptr_compute_ak_c)R_GetCCallable("QF", "_QF_compute_ak_c");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_compute_ak_c(Shield<SEXP>(Rcpp::wrap(lambdas)), Shield<SEXP>(Rcpp::wrap(maxit)), Shield<SEXP>(Rcpp::wrap(eps)), Shield<SEXP>(Rcpp::wrap(beta)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::vector<double> >(rcpp_result_gen);
    }

    inline std::vector<double> dQF_c(std::vector<double> q, List Mellin_list) {
        typedef SEXP(*Ptr_dQF_c)(SEXP,SEXP);
        static Ptr_dQF_c p_dQF_c = NULL;
        if (p_dQF_c == NULL) {
            validateSignature("std::vector<double>(*dQF_c)(std::vector<double>,List)");
            p_dQF_c = (Ptr_dQF_c)R_GetCCallable("QF", "_QF_dQF_c");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dQF_c(Shield<SEXP>(Rcpp::wrap(q)), Shield<SEXP>(Rcpp::wrap(Mellin_list)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::vector<double> >(rcpp_result_gen);
    }

    inline std::vector<double> dQF_c_scal(std::vector<double> q, List Mellin_list) {
        typedef SEXP(*Ptr_dQF_c_scal)(SEXP,SEXP);
        static Ptr_dQF_c_scal p_dQF_c_scal = NULL;
        if (p_dQF_c_scal == NULL) {
            validateSignature("std::vector<double>(*dQF_c_scal)(std::vector<double>,List)");
            p_dQF_c_scal = (Ptr_dQF_c_scal)R_GetCCallable("QF", "_QF_dQF_c_scal");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dQF_c_scal(Shield<SEXP>(Rcpp::wrap(q)), Shield<SEXP>(Rcpp::wrap(Mellin_list)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::vector<double> >(rcpp_result_gen);
    }

    inline std::vector<double> pQF_c(std::vector<double> q, List Mellin_list) {
        typedef SEXP(*Ptr_pQF_c)(SEXP,SEXP);
        static Ptr_pQF_c p_pQF_c = NULL;
        if (p_pQF_c == NULL) {
            validateSignature("std::vector<double>(*pQF_c)(std::vector<double>,List)");
            p_pQF_c = (Ptr_pQF_c)R_GetCCallable("QF", "_QF_pQF_c");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_pQF_c(Shield<SEXP>(Rcpp::wrap(q)), Shield<SEXP>(Rcpp::wrap(Mellin_list)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::vector<double> >(rcpp_result_gen);
    }

    inline std::vector<double> pQF_c_scal(std::vector<double> q, List Mellin_list) {
        typedef SEXP(*Ptr_pQF_c_scal)(SEXP,SEXP);
        static Ptr_pQF_c_scal p_pQF_c_scal = NULL;
        if (p_pQF_c_scal == NULL) {
            validateSignature("std::vector<double>(*pQF_c_scal)(std::vector<double>,List)");
            p_pQF_c_scal = (Ptr_pQF_c_scal)R_GetCCallable("QF", "_QF_pQF_c_scal");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_pQF_c_scal(Shield<SEXP>(Rcpp::wrap(q)), Shield<SEXP>(Rcpp::wrap(Mellin_list)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::vector<double> >(rcpp_result_gen);
    }

    inline double pQF_depratio_c(NumericVector lambdas_1, NumericVector lambdas_2, double h, std::complex<double> delta, double eps, int maxit_ak, int maxit_delta) {
        typedef SEXP(*Ptr_pQF_depratio_c)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_pQF_depratio_c p_pQF_depratio_c = NULL;
        if (p_pQF_depratio_c == NULL) {
            validateSignature("double(*pQF_depratio_c)(NumericVector,NumericVector,double,std::complex<double>,double,int,int)");
            p_pQF_depratio_c = (Ptr_pQF_depratio_c)R_GetCCallable("QF", "_QF_pQF_depratio_c");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_pQF_depratio_c(Shield<SEXP>(Rcpp::wrap(lambdas_1)), Shield<SEXP>(Rcpp::wrap(lambdas_2)), Shield<SEXP>(Rcpp::wrap(h)), Shield<SEXP>(Rcpp::wrap(delta)), Shield<SEXP>(Rcpp::wrap(eps)), Shield<SEXP>(Rcpp::wrap(maxit_ak)), Shield<SEXP>(Rcpp::wrap(maxit_delta)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline List get_mellin_QF(NumericVector lambdas, NumericVector etas, double rho, double h, std::complex<double> delta, double eps, double eps_quant, int maxit_ak, int maxit_quant, int maxit_delta, double step_delta) {
        typedef SEXP(*Ptr_get_mellin_QF)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_get_mellin_QF p_get_mellin_QF = NULL;
        if (p_get_mellin_QF == NULL) {
            validateSignature("List(*get_mellin_QF)(NumericVector,NumericVector,double,double,std::complex<double>,double,double,int,int,int,double)");
            p_get_mellin_QF = (Ptr_get_mellin_QF)R_GetCCallable("QF", "_QF_get_mellin_QF");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_get_mellin_QF(Shield<SEXP>(Rcpp::wrap(lambdas)), Shield<SEXP>(Rcpp::wrap(etas)), Shield<SEXP>(Rcpp::wrap(rho)), Shield<SEXP>(Rcpp::wrap(h)), Shield<SEXP>(Rcpp::wrap(delta)), Shield<SEXP>(Rcpp::wrap(eps)), Shield<SEXP>(Rcpp::wrap(eps_quant)), Shield<SEXP>(Rcpp::wrap(maxit_ak)), Shield<SEXP>(Rcpp::wrap(maxit_quant)), Shield<SEXP>(Rcpp::wrap(maxit_delta)), Shield<SEXP>(Rcpp::wrap(step_delta)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<List >(rcpp_result_gen);
    }

    inline List get_mellin_QF_ratio(NumericVector lambdas_1, NumericVector lambdas_2, NumericVector etas_1, NumericVector etas_2, double rho, double h, std::complex<double> delta, double eps, double eps_quant, int maxit_ak, int maxit_quant, int maxit_delta, double step_delta) {
        typedef SEXP(*Ptr_get_mellin_QF_ratio)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_get_mellin_QF_ratio p_get_mellin_QF_ratio = NULL;
        if (p_get_mellin_QF_ratio == NULL) {
            validateSignature("List(*get_mellin_QF_ratio)(NumericVector,NumericVector,NumericVector,NumericVector,double,double,std::complex<double>,double,double,int,int,int,double)");
            p_get_mellin_QF_ratio = (Ptr_get_mellin_QF_ratio)R_GetCCallable("QF", "_QF_get_mellin_QF_ratio");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_get_mellin_QF_ratio(Shield<SEXP>(Rcpp::wrap(lambdas_1)), Shield<SEXP>(Rcpp::wrap(lambdas_2)), Shield<SEXP>(Rcpp::wrap(etas_1)), Shield<SEXP>(Rcpp::wrap(etas_2)), Shield<SEXP>(Rcpp::wrap(rho)), Shield<SEXP>(Rcpp::wrap(h)), Shield<SEXP>(Rcpp::wrap(delta)), Shield<SEXP>(Rcpp::wrap(eps)), Shield<SEXP>(Rcpp::wrap(eps_quant)), Shield<SEXP>(Rcpp::wrap(maxit_ak)), Shield<SEXP>(Rcpp::wrap(maxit_quant)), Shield<SEXP>(Rcpp::wrap(maxit_delta)), Shield<SEXP>(Rcpp::wrap(step_delta)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<List >(rcpp_result_gen);
    }

    inline std::vector<double> dQF_quant(std::vector<double> q, std::vector<std::complex<double> > Mellin, std::vector<std::complex<double> > z, std::complex<double> delta) {
        typedef SEXP(*Ptr_dQF_quant)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_dQF_quant p_dQF_quant = NULL;
        if (p_dQF_quant == NULL) {
            validateSignature("std::vector<double>(*dQF_quant)(std::vector<double>,std::vector<std::complex<double> >,std::vector<std::complex<double> >,std::complex<double>)");
            p_dQF_quant = (Ptr_dQF_quant)R_GetCCallable("QF", "_QF_dQF_quant");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_dQF_quant(Shield<SEXP>(Rcpp::wrap(q)), Shield<SEXP>(Rcpp::wrap(Mellin)), Shield<SEXP>(Rcpp::wrap(z)), Shield<SEXP>(Rcpp::wrap(delta)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::vector<double> >(rcpp_result_gen);
    }

    inline std::vector<double> pQF_quant(std::vector<double> q, std::vector<std::complex<double> > Mellin, std::vector<std::complex<double> > z, std::complex<double> delta) {
        typedef SEXP(*Ptr_pQF_quant)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_pQF_quant p_pQF_quant = NULL;
        if (p_pQF_quant == NULL) {
            validateSignature("std::vector<double>(*pQF_quant)(std::vector<double>,std::vector<std::complex<double> >,std::vector<std::complex<double> >,std::complex<double>)");
            p_pQF_quant = (Ptr_pQF_quant)R_GetCCallable("QF", "_QF_pQF_quant");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_pQF_quant(Shield<SEXP>(Rcpp::wrap(q)), Shield<SEXP>(Rcpp::wrap(Mellin)), Shield<SEXP>(Rcpp::wrap(z)), Shield<SEXP>(Rcpp::wrap(delta)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::vector<double> >(rcpp_result_gen);
    }

    inline std::vector<double> qQF_c(std::vector<double> p, List Mellin_list, double eps_quant, int maxit_quant, double q0) {
        typedef SEXP(*Ptr_qQF_c)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_qQF_c p_qQF_c = NULL;
        if (p_qQF_c == NULL) {
            validateSignature("std::vector<double>(*qQF_c)(std::vector<double>,List,double,int,double)");
            p_qQF_c = (Ptr_qQF_c)R_GetCCallable("QF", "_QF_qQF_c");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_qQF_c(Shield<SEXP>(Rcpp::wrap(p)), Shield<SEXP>(Rcpp::wrap(Mellin_list)), Shield<SEXP>(Rcpp::wrap(eps_quant)), Shield<SEXP>(Rcpp::wrap(maxit_quant)), Shield<SEXP>(Rcpp::wrap(q0)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::vector<double> >(rcpp_result_gen);
    }

}

#endif // RCPP_QF_RCPPEXPORTS_H_GEN_
