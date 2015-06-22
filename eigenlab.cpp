#include <mex.h>
#include <Eigen/Dense>
#include <iostream>
#include "eigenlab.h"

using Eigen::MatrixXd;

void eigenToMxArray(const Eigen::MatrixXd& in, mxArray* out, int m, int n) {
    if (in.rows() != m) {
        std::cout << "Number of rows in the Eigen matrix does not match param 'm'" << std::endl;
        return;
    }
    if (in.cols() != n) {
        std::cout << "Number of columns in the Eigen matrix does not match param 'n'" << std::endl;
        return;
    }

    int numElem = n * m;
    double *dynamic;
    int offset = 0;

    dynamic = (double*) mxCalloc(numElem, sizeof(double));
    if (dynamic == NULL) {
        std::cout << "Could not allocate dynamic mxArray" << std::endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        offset = i * m;
        for (int j = 0; j < m; j++) {
            dynamic[offset+j] = in(j, i);
        }
    }

    mxSetData(out, dynamic);
    mxSetM(out, m);
    mxSetN(out, n);
}
