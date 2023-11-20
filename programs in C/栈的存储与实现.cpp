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
        printf("栈已满，不能入栈！");
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
    initStack(&s);  //栈的初始化
    printf("请输入一个十进制数：");
    scanf_s("%d", &n);
    int temp = n;
    while (n != 0)  //将输入的十进制数转换为二进制数并压入栈中
    {
        push(&s, n % 2); //将余数压入栈中
        n = n / 2;
    }
    printf("%d对应的二进制为：", temp);
    while (!stackEmpty(&s))  //从栈中弹出二进制数并输出
    {
        printf("%d", pop(&s));
    }
    printf("\n");
    return 0;
}