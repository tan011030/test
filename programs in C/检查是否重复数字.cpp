#include<stdbool.h>
#include <stdio.h>
int main(void)
{
	bool digit_seen[10] = { false };
	int digit;
	long n;
	printf("����һ�����֣�");
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
		printf("���ظ����֡�\n");
	else
		printf("û���ظ����֡�\n");

	return 0;
}
