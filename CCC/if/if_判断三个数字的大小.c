//#include <stdio.h>
//int main() {
//	int a, b, c;
//	printf("请输入第一个数字:");
//	scanf("%d", &a);
//	printf("请输入第二个数字:");
//	scanf("%d", &b);
//	printf("请输入第三个数字:");
//	scanf("%d", &c);
//	if (a > b && a > c)
//	{
//		printf("最大的数字是:%d\n", a);
//	}
//	if (b > a && b > c)
//	{
//		printf("最大的数字是:%d\n", b);
//	}
//	if (c > a && c > b)
//	{
//		printf("最大的数字是:%d\n", c);
//	}
//	if (a == b && b == c)
//	{
//		printf("这三个数字是相等的\n");
//	}
//	return 0;
//}
#include <stdio.h>
int main() {
	int a, b, c, max;
	printf("请输入第三个数字:");
	scanf("%d%d%d", &a, &b, &c);
	if (a > b && a > c)
	{
		max = a;
	}
	if (b > a && b > c)
	{
		max = b;
	}
	if (c > a && c > b)
	{
		max = c;
	}
	if (a == b && b == c)
	{
		printf("这三个数字是相等的\n");
	}
	printf("最大的数字是:%d\n", max);
	return 0;
}