#include "quantization-engine/testbed.hpp"

#include <Eigen/Dense>

Eigen::MatrixXd hessian(Eigen::MatrixXd & M) {
    return 2*M*M.transpose();
}

std::pair<Eigen::MatrixXd, std::vector<int>> quantize (Eigen::MatrixXd & W) {
    
}

int main() {
    return 0;
}