//#include <stdio.h>
//int main() {
//	int a, b;
//	printf("�������һ������:");
//	scanf("%d", &a);
//	printf("������ڶ�������:");
//	scanf("%d", &b);
//	if (a > b)
//	{
//		printf("��������Ϊ:%d\n", a);
//	}
//	if (b > a)
//	{
//		printf("��������Ϊ:%d\n", b);
//	}
//	if(a == b)
//	{
//		printf("������������ȵ�.\n");
//	}
//	return 0;
//}
#include <stdio.h>
int main() {
	int a, b, max;
	printf("�������һ������:");
	scanf("%d", &a);
	printf("������ڶ�������:");
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
	printf("��������Ϊ:%d\n", max);
	return 0;
}