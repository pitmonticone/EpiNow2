% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/create.R
\name{create_initial_conditions}
\alias{create_initial_conditions}
\title{Create Initial Conditions Generating Function}
\usage{
create_initial_conditions(data)
}
\arguments{
\item{data}{A list of data as produced by \code{create_stan_data.}}
}
\value{
An initial condition generating function
}
\description{
\ifelse{html}{\out{<a href='https://www.tidyverse.org/lifecycle/#stable'><img src='figures/lifecycle-stable.svg' alt='Stable lifecycle'></a>}}{\strong{Stable}}
Uses the output of \code{create_stan_data} to create a function which can be used to
sample from the prior distributions (or as close as possible) for parameters. Used
in order to initialise each \code{stan} chain within a range of plausible values.
}
