//直角三角形的判断方式是两条边长的平方数相加,等于第三条边的平方数.例如3 4 5  3*3+4*4=5*5  9+16=25.
#include <stdio.h>
int main() {
	int a, b, c;
	printf("请输入三条边的长:");
	scanf("%d%d%d", &a, &b, &c);
	if ((a*a)+(b*b)==(c*c) ||
		(a*a)+(c*c)==(b*b) ||
		(b*b)+(c*c)==(a*a))
	{
		printf("这是一个直角三角形");
	}
	else
	{
		printf("这不是一个直角三角形\n");
	}
	return 0;
}