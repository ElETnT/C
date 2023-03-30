#include <stdio.h>
int main() {
	int integer1, integer2, integer3, sum;
	printf("请输入第一个整数:");
	scanf("%d", &integer1);
	printf("请输入第二个整数:");
	scanf("%d", &integer2);
	printf("请输入第三个整数:");
	scanf("%d", &integer3);
	sum = integer1 + integer2 + integer3;
	printf("答案为:%d", sum);
}