
#include <Rcpp.h>
#include "cudaTest.h"
using namespace Rcpp;

// [[Rcpp::export]]
List cudaTest()
{
  testMalloc();
  return List::create(Named("SomeReturnValue") = 0);
}
