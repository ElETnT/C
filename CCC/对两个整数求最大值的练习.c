//#include <stdio.h>
//int main() {
//	int a, b, max;
//	printf("Enter First Number:");
//	scanf("%d", &a);
//	printf("Enter Second Number:");
//	scanf("%d", &b);
//	if (a >= b)
//	{
//		max = a;
//	}
//	else
//	{
//		max = b;
//	}
//	printf("Max=%d", max);
//	return 0;
//}

#include <stdio.h>
int max2(int, int);
int main() {
	int a, b;
	/*int max;*/
	printf("Enter First Number:");
	scanf("%d", &a);
	printf("Enter Second Number:");
	scanf("%d", &b);
	printf("Max=%d", max2(a, b));//这里max2(a,b)是引用的代码中的变量名,并不是引用的函数中的名称.
	return 0;
}
int max2(int a, int b) {//函数定义中的变量名,于上述代码中的变量名,没有任何直接关系.
	int max;//max的值是返回给max2,printf输出的是max2的值.
	/*if (a >= b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	return max;*/
	if (a>=b)
	{
		return a;
	}
	else
	{
		return b;
	}//这是第二种方式,两种方式各有各的优缺点,后续才会知道具体是什么,当前只是提供思路.
}