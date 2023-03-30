#include <stdio.h>
int main() {
	int a, b;
	printf("请输入两个数字:");
	scanf("%d %d", &a, &b);
	if (a >= b)
	{
		printf("最大值为:%d", a);
	} 
	else
	{
		printf("最大值为:%d", b);
	}
}