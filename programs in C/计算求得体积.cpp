#include <stdio.h>
#define PI 3.14f
int main(void)
{
	int r;
	printf("��������İ뾶��");
	scanf_s("%d", &r);
	int r3 = r * r * r;
	float v = 4.0f / 3.0f * PI * r3;
	printf("��������%f", v);
	return 0;
}