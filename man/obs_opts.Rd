% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/opts.R
\name{obs_opts}
\alias{obs_opts}
\title{Observation Model Options}
\usage{
obs_opts(family = "negbin", weight = 1, week_effect = TRUE, scale = list())
}
\arguments{
\item{family}{Character string defining the observation model. Options are
Negative binomial ("negbin"), the default, and Poisson.}

\item{weight}{Numeric, defaults to 1. Weight to give the observed data in
the log density.}

\item{week_effect}{Logical defaulting to \code{TRUE}. Should a day of the week effect
be used in the observation model.}

\item{scale}{List, defaulting to an empty list. Should an scaling factor be applied
to map latent infections (convolved to date of report). If none empty a mean
(\code{mean}) and standard deviation (\code{sd}) needs to be supplied defining the normally
distributed scaling factor.}
}
\value{
A list of observation model settings.
}
\description{
\ifelse{html}{\out{<a href='https://www.tidyverse.org/lifecycle/#stable'><img src='figures/lifecycle-stable.svg' alt='Stable lifecycle'></a>}}{\strong{Stable}}
Defines a list specifying the structure of the observation
model. Custom settings can be supplied which override the defaults.
}
\examples{
# default settings
obs_opts()

# Turn off day of the week effect
obs_opts(week_effect = TRUE)

# Scale reported data
obs_opts(scale = list(mean = 0.2, sd = 0.02))
}
