#include <stdio.h>
int main() {
	int integer1, integer2;
	printf("�������һ������:");
	scanf("%d", &integer1);
	printf("������ڶ�������:");
	scanf("%d", &integer2);

	int temp = integer1;
	integer1 = integer2;
	integer2 = temp;

	printf("integer1:%d\n", integer1);
	printf("integer2:%d\n", integer2);
	return 0;
}
//�˷����������ҳ���,�������.