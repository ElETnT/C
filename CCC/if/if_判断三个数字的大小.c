//#include <stdio.h>
//int main() {
//	int a, b, c;
//	printf("�������һ������:");
//	scanf("%d", &a);
//	printf("������ڶ�������:");
//	scanf("%d", &b);
//	printf("���������������:");
//	scanf("%d", &c);
//	if (a > b && a > c)
//	{
//		printf("����������:%d\n", a);
//	}
//	if (b > a && b > c)
//	{
//		printf("����������:%d\n", b);
//	}
//	if (c > a && c > b)
//	{
//		printf("����������:%d\n", c);
//	}
//	if (a == b && b == c)
//	{
//		printf("��������������ȵ�\n");
//	}
//	return 0;
//}
#include <stdio.h>
int main() {
	int a, b, c, max;
	printf("���������������:");
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
		printf("��������������ȵ�\n");
	}
	printf("����������:%d\n", max);
	return 0;
}