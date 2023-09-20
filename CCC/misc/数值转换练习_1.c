#include <stdio.h>
int main() {
	int integer1, integer2;
	printf("请输入第一个整数:");
	scanf("%d", &integer1);
	printf("请输入第二个整数:");
	scanf("%d", &integer2);

	int temp = integer1;
	integer1 = integer2;
	integer2 = temp;

	printf("integer1:%d\n", integer1);
	printf("integer2:%d\n", integer2);
	return 0;
}
//此方法常见而且常用,便于理解.