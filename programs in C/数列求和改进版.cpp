#include <stdio.h>
int main(void)
{
	long n, sum = 0;
	printf("This program sums a series of integers.\n");
	printf("����һ�����֣� \n");
	scanf_s("%ld", &n);
	while (n != 0)
	{
		sum += n;
		scanf_s("%ld", &n);

	}
	printf("���� %ld \n",sum);
	return 0;
}