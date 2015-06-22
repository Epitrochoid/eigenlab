#include <mex.h>
#include "eigenlab.h"
#include <Eigen/Dense>

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
    plhs[0] = mxCreateDoubleMatrix(2, 2, mxREAL);

    Eigen::MatrixXd mat(3, 2);
    mat << 1, 4,
           2, 5,
           3, 6;

    eigenToMxArray(mat, plhs[0], 3, 2);
    return;
}
