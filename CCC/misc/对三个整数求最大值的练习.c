#include <stdio.h>
int max2(int, int);
int max3(int, int, int);//函数声明(宣告)

int main() {
	int a, b, c;
	printf("Enter Three Number:");
	scanf("%d %d %d", &a, &b, &c);
	printf("MAX=%d", max3(a, b, c));//这里面max3(a,b,c)是main里面的abc!!!
}

//函数定义↓
//int max3(int a, int b, int c) {//这里面的abc是max3函数中定义的abc!!!
//	int max = a;
//	if (b > max)
//	{
//		max = b;
//	}
//	if (c > max)
//	{
//		max = c;
//	}
//	return max;
//}
int max3(int a, int b, int c) {
	return max2(max2(a, b), c);//先计算max2(a,b);然后计算max2(回传值,c);return会把数值回传到函数呼叫处,名称不重要.
}
int max2(int a, int b) {//比较a和b的大小.
	if (a>=b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
