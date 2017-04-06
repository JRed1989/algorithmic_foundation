//
// Created by JRed on 2017/4/6.
//

#ifndef ALGORITHMIC_FOUNDATION_BINARY_TREE_H
#define ALGORITHMIC_FOUNDATION_BINARY_TREE_H

#endif //ALGORITHMIC_FOUNDATION_BINARY_TREE_H

/**
 * 二叉检索树结点类型
 */
typedef struct node{
    int data;
    struct node * lchild,*rchild;
}EleNode;

/**
 *  静态检索函数
 * @param t
 * @param key
 * @return
 */
EleNode * search(EleNode * t,int key);
/**
 * 动态检索函数
 * @param t
 * @param key
 * @param pkpt
 * @param kpt
 */
void dySearch(EleNode * t ,int key,EleNode ** pkpt,EleNode ** kpt);
