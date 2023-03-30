#include <stdio.h>
int main() {
	int a, b, c;
	printf("请输入三角形的三条边:");
	scanf("%d%d%d", &a, &b, &c);
	//if (a==b && b==c)
	//{
	//	
	//	printf("这是一个等腰三角形\n");
	//}
	//if (a != b || a != c)
	//{
	//	printf("这是一个等腰三角形\n");
	//}
	if (a==b || a==c || b==c)
	{
		printf("这是一个等腰三角形\n");
	}
}