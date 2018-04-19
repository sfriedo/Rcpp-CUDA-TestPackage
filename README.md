# Rcpp-CUDA-TestPackage

This project was created to illustrate weird behaviour of CUDA when working with Rcpp as noted in [this Stackoverflow post](https://stackoverflow.com/questions/49856810/calling-cuda-api-functions-from-rcpp-package-crashes-client).

## Requirements

In order to install this package, you need:
* [CUDA Toolkit 9.1](https://developer.nvidia.com/cuda-downloads)
* [R v3.4](https://www.r-project.org/)
* [Rcpp v0.12](https://cran.r-project.org/web/packages/Rcpp/index.html)
* [GCC](https://gcc.gnu.org/)

## Setup

In the [MAKEVARS file](https://github.com/shorschig/Rcpp-CUDA-TestPackage/blob/master/src/Makevars), you have to adjust the following properties according to your system:
- `CUDA_HOME = /usr/local/cuda-9.1` -- Your CUDA installation directory
- `R_HOME = /home/sieg/R/x86_64-pc-linux-gnu-library/3.4` -- Your R installation directory
- `CXX = /usr/bin/g++` -- Your gcc executable
- `R_INC = /usr/share/R/include` -- Your R include libraries

**Note:** Please understand that I only provide installation instructions on Linux as I don't own an Apple device and installing on Windows proved to be quite the pain.
