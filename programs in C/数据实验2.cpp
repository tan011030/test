#include<stdio.h>
#include<stdlib.h>

typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode, * Linklist;

Linklist creatL_InReverseOrder(int n)
{
	Linklist L, p;
	L = (Linklist)malloc(sizeof(LNode));
	L->next = NULL;

	for (int i = n; i > 0; i--)
	{
		p = (Linklist)malloc(sizeof(LNode));
		scanf_s("%d", &p->data);
		p->next = L->next;
		L->next = p;
	}

	return L;
}

void print_L(Linklist L)
{
	Linklist p;
	printf("The list is:\n");
	p = L->next;
	while (p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

void ListDelete_X(Linklist* L, int x)
{
	Linklist p, q;
	p = *L; q = p->next;
	if (!p) return;
	while (q && q->data != x)
	{
		p = q; q = q->next;
	}
	if (q)
	{
		p->next = q->next;
		free(q);
	}
	else
		printf("%d does not exist!", x);
}

int main()
{
	int n, x;
	Linklist L;

	//clrscr();
	printf("input n:");
	scanf_s("%d%*c", &n);
	L = creatL_InReverseOrder(n);
	print_L(L);

	printf("input x:");
	scanf_s("%d", &x);
	ListDelete_X(&L, x);
	print_L(L);

	return 0;
}