//#include <stdio.h>
//int main() {
//	int a, b;
//	printf("请输入第一个数字:");
//	scanf("%d", &a);
//	printf("请输入第二个数字:");
//	scanf("%d", &b);
//	if (a > b)
//	{
//		printf("最大的数字为:%d\n", a);
//	}
//	if (b > a)
//	{
//		printf("最大的数字为:%d\n", b);
//	}
//	if(a == b)
//	{
//		printf("两个数字是相等的.\n");
//	}
//	return 0;
//}
#include <stdio.h>
int main() {
	int a, b, max;
	printf("请输入第一个数字:");
	scanf("%d", &a);
	printf("请输入第二个数字:");
	scanf("%d", &b);
	max = a;
	/*if (a > b)
	{
		max = a;
	}*/
	/*if (a < b)
	{
		max = b;
	}*/
	if (max < b)
	{
		max = b;
	}
	printf("最大的数字为:%d\n", max);
	return 0;
}