//
// Created by JRed on 2017/3/30.
//

#include "headers/collections.h"
#include <stdlib.h>
/**
 * 集合初始化，设置空集合
 * @param S
 */
void initSets(DISJSETS * S){
    S->head = (EleNode *)malloc(sizeof(EleNode));
    S->head->next = NULL;
    S->head->ele = -1;
}

/**
 * 把新元素a加入到指定集合中,若集合已有此元素，则函数返回0
 * 否则返回1
 * @param a
 * @param S
 * @return
 */
int insertEle(int a , DISJSETS *S){
    EleNode *p = S->head->next , *q = S->head,*s;
    while (p!=NULL && p->ele < a){
        q=p;
        p=p->next;
    }
    if(p != NULL && p->ele == a){
        return 0;
    }
    s = (EleNode *)malloc(sizeof(EleNode));
    s->ele = a;
    s->next = p;
    q->next = s;
    return 1;
}

/**
 * 从指定集合中删除成员a。若集合不空且元素a在集合中，函数返回1，否则返回0
 * @return
 */
int deleteEle(int a, DISJSETS *S){
    EleNode *p = S->head->next,*q=S->head;
    while(p!=NULL && p->ele < a){
        q = p;
        p = p -> next;
    }
    if(p!= NULL && p->ele == a){
        q->next = p->next;
        free(p);
        return 1;
    }
    return 0;
}

void unionSet(DISJSETS *S1,DISJSETS *S2){
    EleNode *p = S1->head->next, *q = S2->head->next,*t=S1->head;
    while (p!=NULL && q!=NULL){
        //两集合共有的元素，S1的当前结点接在新链表上
        if(p->ele ==  q->ele){
            t->next = p;
            p = p->next;
            q = q->next;
        }else if (p->ele < q->ele){ //S1的元素小，将它连接在新的链表上
            t->next = p;
            p = p->next;
        }else{ //S2的当前元素小，复制结点接到新的链表上
            t->next = (EleNode *)malloc(sizeof(EleNode));
            t->next->ele = q->ele;
            q = q->next;
        }
        t = t->next;
    }
    if(p!=NULL){
        t->next = p; //S1未扫视完，链接之
    }else{ //S2集合未扫视完，逐一复制到新的S1
        while (q!=NULL){
            t->next = (EleNode *)malloc(sizeof(EleNode));
            t->next->ele = q->ele;
            q = q->next;
        }
        t->next = NULL; //链表收尾
    }
}


/**
 * 集合S1与S2的交，结果在S1中
 * @param S1
 * @param S2
 */
void insertSection(DISJSETS *S1,DISJSETS *S2){
    EleNode * p = S1->head->next,* q = S2->head->next,*t = S1->head;
    while (p!=NULL && q!=NULL){
        if(p->ele == q->ele){ //两集合共有的元素，S1的当前结点保留
            t = t->next;
            p = p->next;
            q = q->next;
        }else if(p->ele < q->ele){
            t->next = p->next;
            free(p);
            p = t->next;
        }else{
            q = q->next;
        }
    }
    while (p!=NULL){
        t->next = q->next;
        free(p);
        p=t->next;
    }
}

/**
 * 集合S1与S2的差，结果在S1中
 * @param S1
 * @param S2
 */
void difference(DISJSETS *S1,DISJSETS *S2){
    EleNode * p = S1->head->next,* q = S2->head->next,*t = S1->head;
    while (p!=NULL && q!=NULL){
        if(p->ele == q->ele){ //两集合共有的元素，从S1中删除
            t->next = p->next;
            free(p);
            p = t->next;
            q = q->next;
        }else if(p->ele < q->ele){
            t = t->next;
            p = p->next;
        }else
            q = q->next;
    }
}



