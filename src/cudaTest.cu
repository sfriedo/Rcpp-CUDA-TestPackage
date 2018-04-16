#include <cmath>
#include <cudaTest.h>
#include "cuda_runtime.h"
#include <cuda.h>

void testMalloc()
{
  size_t
    fbytes = sizeof(double);
  double
    *d_mat;
    
    cudaMalloc((void**)&d_mat, 200*50*fbytes);
    cudaFree(d_mat);
}