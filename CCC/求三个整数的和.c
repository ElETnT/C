#include <stdio.h>
int main() {
	int integer1, integer2, integer3, sum;
	printf("�������һ������:");
	scanf("%d", &integer1);
	printf("������ڶ�������:");
	scanf("%d", &integer2);
	printf("���������������:");
	scanf("%d", &integer3);
	sum = integer1 + integer2 + integer3;
	printf("��Ϊ:%d", sum);
}