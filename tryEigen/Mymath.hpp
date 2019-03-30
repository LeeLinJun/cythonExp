#include <eigen3/Eigen/Dense>
using namespace Eigen;

#pragma once
class Mymath {
public:
    static MatrixXf leastSquare(MatrixXf A,MatrixXf y);
};