#ifndef EIGENLAB
#define EIGENLAB

#include <mex.h>
#include <Eigen/Dense>

void eigenToMxArray(const Eigen::MatrixXd&, mxArray*, int, int);

Eigen::MatrixXd mxArrayToEigen(mxArray*, int, int);

#endif
