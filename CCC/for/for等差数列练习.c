//#include <stdio.h>//奇数
//int main() {
//	int count = 0;
//	for (count = 1; count <= 10; count += 2)	for (count = 2; count <= 10; count += 2)//偶数
//	{
//		printf("%d\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>//奇数
//int main() {
//	int count = 0;
//	for (count = 1; count <= 5; count++)
//	{
//		int num = 0;
//		num = 2 * count - 1;
//		printf("%d %d\n", num, count);
//	}
//}

//#include <stdio.h>//偶数
//int main() {
//	int count = 0;
//	for (count = 2; count <= 5; count++)
//	{
//		int num = 0;
//		num = 2 * count;
//		printf("%d %d\n", num, count);
//	}
//}

//#include <stdio.h>//奇数
//int main() {
//	int count;
//	for (count = 1; count <= 10; count++)
//	{
//		if (count % 2 == 1)//count取余之后的值是否等于1,如果等于,那就输出,如果不是,就跳过.
//		{
//			printf("%d\n", count);
//		}
//	}
//	return 0;
//}

#include <stdio.h>//偶数
int main() {
	int count;
	for (count = 1; count <= 10; count++)
	{
		if (count % 2 == 0)//count取余之后的值是否等于0,如果等于,那就输出,如果不是,就跳过.
		{
			printf("%d\n", count);
		}
	}
	return 0;
}