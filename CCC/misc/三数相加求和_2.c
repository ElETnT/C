#include <stdio.h>
int main() {
	int integer, sum;
	printf("请输入第一个数字:");
	scanf("%d", &integer);
	sum = integer;
	printf("请输入第二个数字:");
	scanf("%d", &integer);
	sum = sum + integer;
	printf("请输入第三个数字:");
	scanf("%d", &integer);
	sum = sum + integer;
	printf("运算结果是:%d\n", sum);
	return 0;
}
//这种方式指令多了一点,但是内存占用很低.