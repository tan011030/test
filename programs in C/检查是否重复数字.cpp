#include<stdbool.h>
#include <stdio.h>
int main(void)
{
	bool digit_seen[10] = { false };
	int digit;
	long n;
	printf("输入一个数字：");
	scanf_s("%ld", &n);
	while (n > 0)
	{
		digit = n % 10;
		if (digit_seen[digit])
			break;
		digit_seen[digit] = true;
		n /= 10;
	}
	if (n > 0)
		printf("有重复数字。\n");
	else
		printf("没有重复数字。\n");

	return 0;
}
