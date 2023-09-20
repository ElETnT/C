#include <stdio.h>
int main() {
	int integer1, integer2, sum;
	printf("请输入第一个整数:");
	scanf("%d", &integer1);
	printf("请输入第二个整数:");
	scanf("%d", &integer2);
	sum = integer1 + integer2;
	printf("答案为:%d", sum);
}