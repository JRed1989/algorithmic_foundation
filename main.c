#include <stdio.h>
#include <stdlib.h>
#include "headers/collections.h"
int main() {
    DISJSETS *S = (EleNode*)malloc(sizeof(EleNode));
    initSets(S);
    int i = 0;
    for(;i<20;i++){
        insertEle(i,S);
    }
    EleNode *p = S->head->next;
    while (p!=NULL){
        printf("%d\n",p->ele);
        p = p->next;
    }
    return 0;
}