#include <stdio.h>
int main() {
	int a = 6;
	int b = 0;
	printf("请输入0~10之间的整数:");
	scanf("%d", &b);
	if (a < b)
	{
		printf("抱歉,你猜的数字太大了!\n");
	}
	else
	{
		if (a > b)
		{
			printf("抱歉,你猜的数字太小了!\n");
		}
		//else if (a == b)
		//{
		//	printf("恭喜你,猜到了这个数字!\n");
		//}
		else
		{
			printf("恭喜你,猜到了这个数字!\n");
		}
	}
	return 0;
}