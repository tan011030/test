#include <stdio.h>
int main(void)
{
	long n, sum = 0;
	printf("This program sums a series of integers.\n");
	printf("输入一串数字： \n");
	scanf_s("%ld", &n);
	while (n != 0)
	{
		sum += n;
		scanf_s("%ld", &n);

	}
	printf("和是 %ld \n",sum);
	return 0;
}