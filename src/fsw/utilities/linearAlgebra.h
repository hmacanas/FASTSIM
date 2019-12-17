#ifndef LINEARALGEBRA_H
#define LINEARALGEBRA_H

void vAdd(double *v1, double *v2, double *result, size_t dim);

void vSub(double *v1, double *v2, double *result, size_t dim);

void vMultV(double *v1, double *v2, double *result, size_t dim);

void vDivV(double *v1, double *v2, double *result, size_t dim);

void vNorm(double *v, double *result, size_t dim);

void vDot(double *v1, double *v2, double *result, size_t dim);

void v3CrossMat(double *v, double *result);

void matAdd(double *m1, double *m2, double *result, size_t dim);

void matSub(double *m1, double *m2, double *result, size_t dim);

void matMult(double *m1, double *m2, double *result, size_t m1Rows, 
      size_t m1Cols, size_t m2Rows, size_t m2Cols);

void matInv(double *m, double *result, size_t dim);

void matTrans(double *m, double * result, size_t dim);


#endif
