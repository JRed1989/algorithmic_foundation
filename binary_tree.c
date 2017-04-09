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
void dySearch(EleNode * t ,int key,EleNode ** pkpt,EleNode ** kpt){
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


int deleteNode(EleNode **pt,int key){
    EleNode *parent,*p,*q,*child;
    parent = NULL;
    p = *pt;
    while(p){
        if(p->data == key){
            break;
        }
        parent = p;
        p = key < p->data ? p->lchild:p->rchild;
    }
    if(p==NULL){
        return 0;
    }
    if(p->lchild&&p->rchild){
        for(q = parent= p,p=p->rchild;p->lchild!=NULL;parent=p,p=p->lchild);
        q->data=p->data;
    }
    child = p->lchild?p->lchild:p->rchild;
    if(parent == NULL)*pt=child;
    else if(p == parent->lchild)parent->lchild=child;
    else
        parent->rchild=child;
    free(p);
    return 1;



}

