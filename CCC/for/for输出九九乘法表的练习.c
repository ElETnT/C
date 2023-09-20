//#include <stdio.h>//自己写的,刹不住车,暂时不知道怎么跳出循环
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	int answer = 0;
//	for (num1 = 2, num2 = 1; num2 <= 9; ++num2)
//	{
//		if (num2 == 9)
//		{
//			num2 = 1;
//			++num1;
//		}
//		printf("%d x %d = %d\n", num1, num2, (num1*num2));
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int num1;
//	int num2;
//	for (num1 = 1; num1 <= 9; ++num1)//这是第一个数字,用这种方式来自加.
//	{
//		for (num2 = 1; num2 <= 9; ++num2)//如果外面的判断条件成立,里面的循环会先做完,再去外面的循环判断.
//		{
//			printf("%d x %d = %d\n", num2, num1, (num1 * num2));
//		}
//	}
//	return 0;
//}

#include <stdio.h>
int main() {
	int c;
	for (c=1;c<=81;++c)
	{
		int i = (c - 1) / 9 + 1;//只有9的自身或9的倍数,才可以整除掉,然后+1,实现递增.
		int j = (c - 1) % 9 + 1;//在c小于9的时候余数就是答案.在c大于9之后余数+1也是答案.通过取余完成循环.
		printf("%d x %d = %d\n", i, j, i * j);
	}
	return 0;
}