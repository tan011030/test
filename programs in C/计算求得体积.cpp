#include <stdio.h>
#define PI 3.14f
int main(void)
{
	int r;
	printf("请输入球的半径：");
	scanf_s("%d", &r);
	int r3 = r * r * r;
	float v = 4.0f / 3.0f * PI * r3;
	printf("球的体积是%f", v);
	return 0;
}