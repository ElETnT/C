#include <stdio.h>
int main() {
	int integer1, integer2, integer3;
	printf("请输入第一个整数:");
	scanf("%d", &integer1);
	printf("请输入第二个整数:");
	scanf("%d", &integer2);
	printf("请输入第三个整数:");
	scanf("%d", &integer3);

	int integer0;
	integer0 = integer1;//integer0, integer1  0, 1
	integer1 = integer2;//integer1, integer2  1, 2
	integer2 = integer3;//integer2, integer3  2, 3
	integer3 = integer0;//integer3, integer0  3, 1

	printf("交换后的第一个整数为:%d", integer1);
	printf("交换后的数二个整数为:%d", integer2);
	printf("交换后的数三个整数为:%d", integer3);
	return 0;
}
/*每次输入的整数分别为1, 2, 3.第一次的结果为:2, 3, 1.*
*							  第二次的结果为:1, 2, 1.*
*							  第二次的结果为:2, 2, 1.*
*							  第四次的结果为:2, 3, 1.*
*					其实第一次结果就对了,没有仔细审题*/