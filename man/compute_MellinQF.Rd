% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/MellinQF.R
\name{compute_MellinQF}
\alias{compute_MellinQF}
\title{Mellin Transform of a Positive QF}
\source{
Ruben, Harold. "Probability content of regions under spherical normal distributions, IV:
The distribution of homogeneous and non-homogeneous quadratic functions of normal variables."
The Annals of Mathematical Statistics 33.2 (1962): 542-570.
}
\usage{
compute_MellinQF(
  lambdas,
  etas = rep(0, length(lambdas)),
  eps = 1e-06,
  rho = 1 - 1e-04,
  maxit_comp = 1e+05,
  eps_quant = 1e-06,
  maxit_quant = 10000,
  lambdas_tol = NULL
)
}
\arguments{
\item{lambdas}{vector of positive weights.}

\item{etas}{vector of non-centrality parameters. Default all zeros (central chi square).}

\item{eps}{required absolute error for density and cumulative functions.}

\item{rho}{distribution total probability mass for which it is desired to keep the error \code{eps}.}

\item{maxit_comp}{maximum number of iterations.}

\item{eps_quant}{required numerical error for quantile computation.}

\item{maxit_quant}{maximum number of iterations before stopping the quantile computation.}

\item{lambdas_tol}{maximum value admitted for the weight skewness. When it is not NULL (default), elements of lambdas such that the ratio max(lambdas)/lambdas is greater than the specified value are removed.}
}
\value{
The function returns an object of the class \code{MellinQF} that contains information on the Mellin transform
of a linear combination of positively weighted chi-square random variables. This information can be used in order to
evaluate the density, cumulative distribution and quantile functions.

An object of the class \code{MellinQF} has the following components:
\itemize{
\item \code{range_q}: the range of quantiles that contains the specified mass of probability \code{rho} in which it
is possible to compute density and CDF preserving the error level \code{eps}.
\item \code{Mellin}: a list containing the values of the Mellin transform (\code{Mellin}),
the corresponding evaluation points (\code{z}), the integration step \code{delta} and the lowest weight (\code{lambda_min}).
\item the inputs \code{rho}, \code{lambdas}, \code{etas}, \code{eps} needed for CDF, PDF and quantile function computation.
}
}
\description{
The function computes the Mellin transform of a positive definite quadratic form producing a \code{MellinQF} object.
The output can be used to evaluate the density, cumulative and quantile functions of
the target quadratic form.
}
\details{
The quadratic form having positive weights \code{lambdas} and non-centrality parameters \code{etas} is considered:
\deqn{Q=\sum_{i=1}^r \lambda_i\chi^2_{1,\eta_i}. }

Its Mellin transform is computed by exploiting the density formulation by Ruben (1962).
The numerical error is controlled in order to provide the requested precision (\code{eps}) for the
interval of quantiles that contains the specified total probability \code{rho}.

The argument \code{eps_quant} controls the relative precision requested for the
computation of quantiles that determine the range in which the error \code{eps} is
guaranteed, whereas \code{maxit_quant} sets the maximum number of Newton-Raphson iterations of the algorithm.
}
\examples{

\donttest{
library(QF)
# Definition of the QF
lambdas_QF <- c(rep(7, 6),rep(3, 2))
etas_QF <- c(rep(6, 6), rep(2, 2))
# Computation Mellin transform
eps <- 1e-7
rho <- 0.999
Mellin <- compute_MellinQF(lambdas_QF, etas_QF, eps = eps, rho = rho)
print(Mellin)
}


}
\seealso{
The function \code{\link{print.MellinQF}} can be used to summarize the basic information on the Mellin transform.

The object can be used in the function \code{\link{dQF}} to compute the density function of the QF,
\code{\link{pQF}} for the CDF and \code{\link{qQF}} for the quantile function.
}
