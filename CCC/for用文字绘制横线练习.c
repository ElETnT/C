#include <stdio.h>
int main() {
	int start = 0;
	int end = 0;
	printf("������һ������:");
	scanf("%d", &end);
	for (start=1;start<=end;start++)
	{
		printf("*");
	}
	printf("\n");//������Ҫ���е�,����ʦ�Ľ�������.
	return 0;
}