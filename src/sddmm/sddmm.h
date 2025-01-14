#include <cuda.h>

void sddmm_cuda_coo(int k, int nnz, int *rowind, int *colind, float *D1,
                    float *D2, float *out);

void sddmm_cuda_csr(int m, int k, int nnz, int *rowptr, int *colind, float *D1,
                    float *D2, float *out);