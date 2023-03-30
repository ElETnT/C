#include <stdio.h>
int main() {
	int num1, num2;
	printf("请输入两个数字:");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
	{
		printf("比大小的结果是:%d > %d", num1, num2);
	}
	else if (num1 < num2)
	{
		printf("比大小的结果是:%d < %d", num1, num2);
	}
	else
	{
		printf("比大小的结果是:%d = %d", num1, num2);
	}
	return 0;
}