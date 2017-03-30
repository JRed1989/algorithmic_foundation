//
//集合头文件
// Created by JRed on 2017/3/30.
//
typedef struct node{
    int ele;
    struct node * next;
}EleNode;

typedef struct{
    EleNode * head;
}DISJSETS;

void initSets(DISJSETS * S);
int insertEle(int a , DISJSETS *S);
int deleteEle(int a, DISJSETS *S);
void unionSet(DISJSETS *S1,DISJSETS *S2);
void insertSection(DISJSETS *S1,DISJSETS *S2);
void difference(DISJSETS *S1,DISJSETS *S2);




