#include <iostream>
#include <eigen3/Eigen/Dense>
#include "Mymath.hpp"
using namespace Eigen;

MatrixXf Mymath::leastSquare(MatrixXf A,MatrixXf y){
    return (A.transpose()*A).inverse()*A.transpose()*y;
}

int main()
{
    MatrixXf A(2,2);
    A<<1,0,
       0,1;
    MatrixXf y(2,1);    
    y<<1,
       2;
    MatrixXf x(2,1);
    x=Mymath::leastSquare(A,y);
    
    std::cout << x << std::endl;
    
}

extern "C"{
    void leastSquare(const void * inA,const void * iny,void * x){
        const double * A = (double *) inA;
        const double * y = (double *) iny;
        
    }

    }
}