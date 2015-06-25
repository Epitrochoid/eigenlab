#include <mex.h>
#include "eigenlab.h"
#include <Eigen/Dense>
#include <iostream>

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
    Eigen::MatrixXd out;
    mxArrayToEigen(prhs[0], out, 3, 4);
    std::cout << out << std::endl;
    return;
}
