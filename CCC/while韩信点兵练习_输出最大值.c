//#include <stdio.h>//①
//int main() {//这种方式是通过递减的方式来完成目标的,从大往小进行枚举,然后输出找到的第一个数字.
//	int max = 0;
//	printf("MAX=");
//	scanf("%d", &max);
//	int num; num = max;
//	while (num > 0 && !(num % 3 == 2 && num % 5 == 3 && num % 7 == 2))
//	{
//		--num;
//	}
//	if (num > 0)
//	{
//		printf("%d\n", num);
//	}
//	else
//	{
//		printf("Error!\n");
//	}
//	return 0;
//}

//#include <stdio.h>//②这种方式是通过递增来找最大值的,每次answer都会储存最新的符合条件的num.如果到最后都没找到符合条件的,answer的值,依旧会是0,就会告诉用户,找不到符合条件的值.
//int main() {
//	int max = 0;
//	printf("MAX=");
//	scanf("%d", &max);
//	int num;
//	int answer = 0;
//	for (num = 1; num <= max; ++num)
//	{
//		if (num % 3 == 2 && num % 5 == 3 && num % 7 == 2)
//		{
//			answer = num;
//		}
//	}
//	/*if (answer != 0)
//	{
//		printf("%d", answer);
//	}*/
//	if (answer == 0)
//	{
//		printf("找不到符合条件的值!\n");
//	}
//	else
//	{
//		printf("%d", answer);
//	}
//	return 0;
//}

//#include <stdio.h>//③在这段代码中answer会保存最小的那一个数值.
//int main() {
//	int num = 0;
//	int max = 0;
//	int answer = 0;
//	printf("MAX=");
//	scanf("%d", &max);
//	for (num = max; num >= 1; --num)
//	{
//		if (num % 3 == 2 && num % 5 == 3 && num % 7 == 2)
//		{
//			answer = num;
//		}
//	}
//	if (answer == 0)
//	{
//		printf("找不到符合条件的值!\n");
//	}
//	else
//	{
//		printf("%d", answer);
//	}
//	return 0;
//}

//#include <stdio.h>//③Plus.通过判断条件,可以让answer获得值之后,就跳出循环.这样子得到最大的值之后,就可以直接跳出循环并且输出了.
//int main() {
//	int num = 0;
//	int max = 0;
//	int answer = 0;
//	printf("MAX=");
//	scanf("%d", &max);
//	for (num = max; num >= 1 && answer == 0; --num)//在for循环中的判断条件也是可以用&&和||的.
//	{
//		if (num % 3 == 2 && num % 5 == 3 && num % 7 == 2)
//		{
//			answer = num;
//		}
//	}
//	if (answer == 0)
//	{
//		printf("找不到符合条件的值!\n");
//	}
//	else
//	{
//		printf("%d", answer);
//	}
//	return 0;
//}

#include <stdio.h>
int main() {
	int max = 0;
	int num = 0;
	printf("MAX=");
	scanf("%d", &max);
	for (num = max; num >= 1; --num)
	{
		if (num % 3 == 2 && num % 5 == 3 && num % 7 == 2)
		{
			break;//如果符合条件,break就会跳出循环.
		}
	}
	if (num == 0)
	{
		printf("没有找到合法的数值!\n");
	}
	else
	{
		printf("%d\n", num);
	}
	return 0;
}