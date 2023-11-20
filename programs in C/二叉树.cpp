#include <stdio.h>
#include <stdlib.h>

#define null 0
typedef char datatype;

typedef struct node      //定义二叉链表结点结构
{
    datatype data;
    struct node* lchild, * rchild;
} bintnode;

typedef bintnode* bintree;   //定义二叉链表指针类型

// 建立二叉树
void createBintree(bintree* T) {
    datatype ch;
    scanf_s("%c", &ch);
    if (ch == '#') {
        *T = null;
    }
    else {
        *T = (bintnode*)malloc(sizeof(bintnode));
        (*T)->data = ch;
        createBintree(&((*T)->lchild));
        createBintree(&((*T)->rchild));
    }
}

// 先序遍历
void preOrderTraverse(bintree T) {
    if (T != null) {
        printf("%c", T->data);
        preOrderTraverse(T->lchild);
        preOrderTraverse(T->rchild);
    }
}

// 中序遍历
void inOrderTraverse(bintree T) {
    if (T != null) {
        inOrderTraverse(T->lchild);
        printf("%c", T->data);
        inOrderTraverse(T->rchild);
    }
}

// 后序遍历
void postOrderTraverse(bintree T) {
    if (T != null) {
        postOrderTraverse(T->lchild);
        postOrderTraverse(T->rchild);
        printf("%c", T->data);
    }
}

// 统计二叉树叶子结点数量
void CountLeaf(bintree T, int& count) {
    if (T) {
        if ((!T->lchild) && (!T->rchild))
            count++;     // 对叶子结点计数
        CountLeaf(T->lchild, count);
        CountLeaf(T->rchild, count);
    }
}

int main() {
    bintree T;
    printf("Please input the node sequence in pre-order: ");
    createBintree(&T);
    printf("Pre-order traverse: ");
    preOrderTraverse(T);
    printf("\nIn-order traverse: ");
    inOrderTraverse(T);
    printf("\nPost-order traverse: ");
    postOrderTraverse(T);
    printf("\n");

    int count = 0;
    CountLeaf(T, count);
    printf("The number of leaf nodes is: %d\n", count);

    return 0;
}
