#include <stdio.h>
int main() {
	int num1, num2, num3;
	printf("请输入三个数字:");
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2 && num1 > num3)
	{
		printf("最大的数字是:%d\n", num1);
	}
	else if (num2 > num1 && num2 > num3)
	{
		printf("最大的数字是:%d\n", num2);
	}
	else if (num3 > num1 && num3 > num2)
	{
		printf("最大的数字是:%d\n", num3);
	}
	else if (num1 == num2 && num2 == num3)
	{
		printf("这三个数字是相等的.\n");
	}
	return 0;
}