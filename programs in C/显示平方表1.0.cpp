#include <stdio.h>
int main(void)
{
	int i, n;
	printf("This programs prints a table of squares.\n");
	printf("输入一个数字：");
	scanf_s("%d", &n);
	i = 1;
	while (i <= n)
	{
		printf("%10d%10d\n", i, i * i);
		i++;
	}
	return 0;
}