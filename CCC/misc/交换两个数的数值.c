#include <stdio.h>
int main() {
	int integer1, integer2, sum;
	printf("请输入第一个整数:");
	scanf("%d", &integer1);
	printf("请输入第二个整数:");
	scanf("%d", &integer2);

	int integer3;
	integer3 = integer1;
	integer1 = integer2;
	integer2 = integer3;

	printf("交换后的第一个整数为:%d", integer1);
	printf("交换后的数二个整数为:%d", integer2);
	return 0;
}