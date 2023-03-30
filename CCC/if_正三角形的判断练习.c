//#include <stdio.h>
//int main() {
//	printf("请输入三角形的三个边长:");
//	int a, b, c;
//	scanf("%d", &a);
//	scanf("%d", &b);			scanf("%d%d%d",&a,&b,&c);
//	scanf("%d", &c);			这是依序输入三个数字,写三个scanf一个道理.
//	if (a==b && b==c)
//	{
//		printf("这是一个等边三角形\n");
//	}
//	if (a!=b || b!=c)
//	{
//		printf("这不是一个等边三角形\n");
//	}
//	return 0;
//}这是我自己的书写方式,测试了输入同样数值,或者输入不同的数值,没有发现提示错误.
#include <stdio.h>
int main() {
	int side1, side2, side3;
	printf("Please Enter The Lengths:");
	scanf("%d%d%d", &side1, &side2, side3);
	if (side1==side2 && side2==side3)
	{
		printf("Regular Triangle\n");
	}
	//if (side1==side2)
	//{
	//	if (side2==side3)
	//	{
	//		printf("Regular Triangle\n");
	//	}
	//}
	//printf("Not a Regular Triangle\n");
	return 0;
}