#include <stdio.h>
int main() {
	int a, b, c;
	printf("�����������ε�������:");
	scanf("%d%d%d", &a, &b, &c);
	//if (a==b && b==c)
	//{
	//	
	//	printf("����һ������������\n");
	//}
	//if (a != b || a != c)
	//{
	//	printf("����һ������������\n");
	//}
	if (a==b || a==c || b==c)
	{
		printf("����һ������������\n");
	}
}