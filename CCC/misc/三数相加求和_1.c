#include <stdio.h>
int main() {
	int integer1, integer2, integer3, sum;
	printf("Please Enter The First Integer:");
	scanf("%d", &integer1);
	printf("Please Enter The Second Integer:");
	scanf("%d", &integer2);
	printf("Please Enter The Third Integer:");
	scanf("%d", &integer3);
	sum = integer1 + integer2 + integer3;
	printf("Sum is %d.\n", sum);
	return 0;
}
//这种方法,变量使用的越多,内存的占用就会越高.
//现在大部分的软件都会优先占用内存.
//因为内存不使用完,卡顿基本是感受不到的.