#include <stdio.h>
int main() {
	int a, b, c, d, max;
	printf("�������ĸ�����:");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	max = a;
	if (a > b && a > c && a > d)
	{
		max = a;
	}
	if (b > a && b > c && b > d)
	{
		max = b;
	}
	if (c > a && c > b && c > d)
	{
		max = c;
	}
	if (d > a && d > b && d > c)
	{
		max = d;
	}
	printf("����������:%d\n", max);
	if (a == b && b == c && c == d)
	{
		printf("���ĸ�������ͬ����\n");
	}
	return 0;
}