#include <stdio.h>
int main() {
	int a, b, c, d, e;
	printf("�������ĸ�����:");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a<b && a<c && a<d)
	{
		printf("��С������Ϊ:%d\n", a);
	}
	if (b<a && b<c && b<d)
	{
		printf("��С������Ϊ:%d\n", b);
	}
	if (c<a && c<b && c<d)
	{
		printf("��С������Ϊ:%d\n", c);
	}
	if (d<a && d<b && b<c)
	{
		printf("��С������Ϊ:%d\n", d);
	}
	return 0;
}