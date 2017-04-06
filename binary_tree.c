//二叉检索树
// Created by JRed on 2017/4/6.
//
#include "headers/binary_tree.h"
#include <stdlib.h>

EleNode * search(EleNode * t,int key){
    while(t!=NULL){
        if(t->data == key)
            return t;
        else if(key < t->data)
            t = t->lchild;
        else
            t = t->rchild;
    }
    return NULL;
}
void dySearch(EleNode * t ,int key,EleNode ** pkpt,EleNode ** kpt{
    *pkpt = NULL;
    *kpt = t;
    while(*kpt != NULL){
        if((* kpt) -> data == key)
            return;
        *pkpt = *kpt;
        if(key < (*kpt)->data){
            *kpt = (*kpt) -> lchild;
        }else
            *kpt = (*kpt) -> rchild;
    }

}



