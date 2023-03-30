#include <stdio.h>
int main() {
	int a, b = 0;
	int c = 1;//如果输入0的时候不算输入次数,那就给c定义为0.
	printf("Please Enter The Number:");
	scanf("%d", &a);
	while (a != 0)
	{
		c++;
		b = b + a;
		printf("Please Enter The Number:");
		scanf("%d", &a);
	}
	printf("Sum is %d\n (%d)", b, c);
	return 0;
}