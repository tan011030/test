#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define NULL 0

typedef struct
{
    int stack[100];
    int top;
}sqstack;

void initStack(sqstack* s)
{
    s->top = -1;
}

void push(sqstack* s, int x)
{
    if (s->top >= 100)
        printf("ջ������������ջ��");
    else
    {
        s->top++;
        s->stack[s->top] = x;
    }
}

int stackEmpty(sqstack* s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}

int pop(sqstack* s)
{
    int x = s->stack[s->top];
    s->top--;
    return x;
}

int main()
{
    int n;
    sqstack s;
    initStack(&s);  //ջ�ĳ�ʼ��
    printf("������һ��ʮ��������");
    scanf_s("%d", &n);
    int temp = n;
    while (n != 0)  //�������ʮ������ת��Ϊ����������ѹ��ջ��
    {
        push(&s, n % 2); //������ѹ��ջ��
        n = n / 2;
    }
    printf("%d��Ӧ�Ķ�����Ϊ��", temp);
    while (!stackEmpty(&s))  //��ջ�е����������������
    {
        printf("%d", pop(&s));
    }
    printf("\n");
    return 0;
}