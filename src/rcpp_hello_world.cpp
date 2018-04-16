
#include <Rcpp.h>
#include "cudaTest.h"
using namespace Rcpp;

// [[Rcpp::export]]
Rcpp::NumericMatrix cudaTest()
{
  testMalloc();
}
