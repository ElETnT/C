#include <stdio.h>
int main() {
	int a, b, c, d, e;
	printf("请输入四个数字:");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a<b && a<c && a<d)
	{
		printf("最小的数字为:%d\n", a);
	}
	if (b<a && b<c && b<d)
	{
		printf("最小的数字为:%d\n", b);
	}
	if (c<a && c<b && c<d)
	{
		printf("最小的数字为:%d\n", c);
	}
	if (d<a && d<b && b<c)
	{
		printf("最小的数字为:%d\n", d);
	}
	return 0;
}