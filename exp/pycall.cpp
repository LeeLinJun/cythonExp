// #include"pycall.h"
// //两数相加
// extern "C" __declspec(dllexport) int  sum(int a, int b) {
//     return a + b;
// }
// //两数相减
// extern "C" __declspec(dllexport) int sub(int a, int b) {
//     return a-b;
// }


#include <iostream>
#include "pycall.h"

using namespace std;
 

int Mymath::sum(int a,int b) {
    return a+b;
}
int Mymath::sub(int a,int b) {
    return a-b;
}

extern "C" {
    Mymath obj;
    int sum(int a,int b) {
        return obj.sum(a,b); 
      }
    int sub(int a,int b) {
        return obj.sub(a,b); 
      }
}
