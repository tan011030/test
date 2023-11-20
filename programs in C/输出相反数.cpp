#include <stdio.h>
int main(void)
{
	int number;
	printf("输入一个两位数： ");
	scanf_s("%d", &number);

	printf("输出的数字为：%d%d", number % 10, number / 10);
	return 0;
}