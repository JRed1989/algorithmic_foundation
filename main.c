#include <stdio.h>
#include <stdlib.h>
#include "headers/collections.h"
#include "headers/fangcheng.h"
#include "headers/fibonacci.h"
#include "headers/sort.h"
int main() {
    //集合
//    DISJSETS *S = (EleNode*)malloc(sizeof(EleNode));
//    initSets(S);
//    int i = 0;
//    for(;i<20;i++){
//        insertEle(i,S);
//    }
//    EleNode *p = S->head->next;
//    while (p!=NULL){
//        printf("%d\n",p->ele);
//        p = p->next;
//    }
    //迭代法
//    double x;
//    int m=rootfx(f,1.5,0.000005,&x);
//    printf("迭代%d次，根为%.5f\n",m,x);

    //递归
//    int result = fibo(4);
//    printf("%d",result);

    //排序
    int e[] = {5,3,15,1,10,4};
//    insertSort(e,6);
//    selectSort(e,6);
//      bubbleSort(e,6);
        shellSort(e,6);
    return 0;
}