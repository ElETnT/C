#include <stdio.h>
int main() {
	int integer1, integer2;
	printf("请输入第一个整数:");
	scanf("%d", &integer1);//3
	printf("请输入第二个整数:");
	scanf("%d", &integer2);//5

	integer1 = integer1 + integer2;//8=3+5			/*integer1 = integer1 ^ integer2;*
	integer2 = integer1 - integer2;//5=8-5			 *integer2 = integer1 ^ integer2;*第三种方法,暂时没有讲解,只是说很很复杂.
	integer1 = integer1 - integer2;//8=8-5			 *integer1 = integer1 ^ integer2;*/

	printf("integer1:%d\n", integer1);
	printf("integer2:%d\n", integer2);
	return 0;
}
//这个办法就是让两个数字相加,然后逆向拆开,让两个值呼唤.但是有一定的限制性.