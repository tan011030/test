#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define NULL 0
#define ElemType int
typedef struct Node {
	int data;
	struct Node* pNext;
}*pNode, Node;

typedef struct {
	pNode front, rear;
}linkQueue;

int InitQueue(linkQueue* Q);
int EnQueue(linkQueue* Q, ElemType e);
int DeQueue(linkQueue* Q, ElemType& e);
int QueueLength(linkQueue Q);
int main()
{
	linkQueue Q;
	ElemType x, e;

	InitQueue(&Q);

	scanf_s("%d", &x);
	EnQueue(&Q, x);

	scanf_s("%d", &x);
	EnQueue(&Q, x);
	printf("队列长度为：%d\n", QueueLength(Q)); 
	DeQueue(&Q, e);
	printf("out:%d\n", e);

	scanf_s("%d", &x);
	EnQueue(&Q, x);

	DeQueue(&Q, e);
	printf("out:%d\n", e);

	DeQueue(&Q, e);
	printf("out:%d\n", e);

}

int InitQueue(linkQueue* Q)
{
	Q->front = Q->rear = (pNode)malloc(sizeof(Node));
	Q->front->pNext = NULL;
	printf("创建成功！\n");
	return 0;
}

int QueueLength(linkQueue Q)
{
	pNode p = Q.front->pNext;
	int len = 0;
	while (p != NULL) {
		len++;
		p = p->pNext;
	}
	return len;
}

int EnQueue(linkQueue* Q, ElemType e)
{
	pNode pNew = (pNode)malloc(sizeof(Node));
	pNew->data = e;
	pNew->pNext = NULL;
	Q->rear->pNext = pNew;;
	Q->rear = pNew;
	return 0;
}

int DeQueue(linkQueue* Q, ElemType& e)
{
	if (Q->front == Q->rear) {
		printf("次队列为空！");
		return 0;
	}
	pNode p = Q->front->pNext;
	e = p->data;
	Q->front->pNext = p->pNext;
	if (p == Q->rear) {
		Q->rear = Q->front;
	}
	free(p);

	return 1;

}