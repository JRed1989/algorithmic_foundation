//
// Created by JRed on 2017/4/7.
//
/**
 * 使用迭代法求方程的根
 */
#include "headers/fangcheng.h"
#include <stdio.h>

int rootfx(fpt g,double initRoot,double Epsilon, double * root){
    double x1,x0 = initRoot;
    int n=0;
    do{
        printf("x%d=%.5f\n",n,x0);
        x1=x0;
        x0=(*g)(x1);
        n++;
    }while (fabs(x0-x1) >= Epsilon);
    *root = x0;
    printf("x%d == %.5f\n",n,x0);
    return n;
}

double f(double x){
    return pow(x+1,1.0/3.0);
}