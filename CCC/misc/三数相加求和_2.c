#include <stdio.h>
int main() {
	int integer, sum;
	printf("�������һ������:");
	scanf("%d", &integer);
	sum = integer;
	printf("������ڶ�������:");
	scanf("%d", &integer);
	sum = sum + integer;
	printf("���������������:");
	scanf("%d", &integer);
	sum = sum + integer;
	printf("��������:%d\n", sum);
	return 0;
}
//���ַ�ʽָ�����һ��,�����ڴ�ռ�úܵ�.