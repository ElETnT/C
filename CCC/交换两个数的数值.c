#include <stdio.h>
int main() {
	int integer1, integer2, sum;
	printf("�������һ������:");
	scanf("%d", &integer1);
	printf("������ڶ�������:");
	scanf("%d", &integer2);

	int integer3;
	integer3 = integer1;
	integer1 = integer2;
	integer2 = integer3;

	printf("������ĵ�һ������Ϊ:%d", integer1);
	printf("�����������������Ϊ:%d", integer2);
	return 0;
}