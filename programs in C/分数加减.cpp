#include<stdio.h>
int main(void)
{
	int num1, mu1, num2, mu2, result_num, result_mu;
	printf("Enter first fenshu: ");
	scanf_s("%d/%d", &num1, &mu1);

	printf("Enter second fenshu: ");
	scanf_s("%d/%d", &num2, &mu2);
	result_num = num1 * mu2 + num2 * mu1;
	result_mu = mu1 * mu2;
	printf("两个分数的和是%d/%d\n", result_num, result_mu);
	return 0;
}