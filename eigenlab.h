#ifndef EIGENLAB
#define EIGENLAB

#include <mex.h>
#include <Eigen/Dense>

void eigenToMxArray(const Eigen::MatrixXd&, mxArray*, int, int);

void mxArrayToEigen(const mxArray*, Eigen::MatrixXd&, int, int);

#endif
