#include <stdio.h>
int main(void)
{
	int number;
	printf("����һ����λ���� ");
	scanf_s("%d", &number);

	printf("���������Ϊ��%d%d", number % 10, number / 10);
	return 0;
}