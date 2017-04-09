//
// Created by JRed on 2017/4/8.
//

#include "headers/sort.h"
#include <stdio.h>

void insertSort(int e[],int n){
    int i,j;
    int temp;
    int m;
    for(i=1;i<n;i++){
        temp=e[i];
        for(j=i-1;j>=0 && e[j] > temp;j--){
            e[j+1] = e[j];
        }
        e[j+1] = temp;
        _printEle(e,n);
    }
}

void selectSort(int e[],int n){
    int i,j;
    int temp;
    int minIndex;
    for(i=0;i<n-1;i++){
        minIndex = i;
        for(j=i+1;j<n;j++){
            if(e[j]<e[minIndex]){
                minIndex = j;
            }
        }
        if(minIndex != i){
            temp = e[i];
            e[i]=e[minIndex];
            e[minIndex] = temp;
        }
        _printEle(e,n);
    }
}

void _printEle(int e[],int n){
    printf("\n");
    int m;
    for(m=0;m<n;m++){
        printf("%d\t",e[m]);
    }
    printf("\n");
}

void bubbleSort(int e[],int n){
    int i,j ,temp,flag;
    for(i=1;i<n;i++ ){
        for(flag=0,j=n-1;j>=i;j--){
            if(e[j-1]>e[j]){
                temp = e[j-1];
                e[j-1] = e[j];
                e[j] = temp;
                flag = 1;
            }
        }
        _printEle(e,n);
        if(flag == 0){
            break;
        }
    }
}

void shellSort(int e[],int n){
    int g;
    int i,j;
    int t;
    for(g=n/2;g>=1;g=g/3+1){
        for(i=g;i<n;i++){
            for(t=e[i],j=i;j>g && t< e[j-g];j-=g){
                e[j] = e[j-g];
            }
            e[j] = t;
            _printEle(e,n);
        }

    }
}
void quickSort(int e[],int n){
    quickS(e,0,n-1);
}
void quickS(int e[],int left,int right){
    int i,j,pivot,t;
    if(left+10<=right){

    }
}
int median3(int e[],int left,int right);

