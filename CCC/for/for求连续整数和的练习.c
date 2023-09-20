//#include <stdio.h>
//int main() {
//	int num;
//	int sum = 0;
//	for (num = 1; num <= 100; num++)
//	{
//		sum = sum + num;
//		printf("%d\n", sum);
//	}
//	return 0;
//}

#include <stdio.h>
int main() {
	int start = 0;
	int end = 0;
	int count = 0;
	int temp = 0;
	printf("请输入两个数字:");
	scanf("%d %d", &start, &end);
	if (start > end)
	{
		temp = start;
		start = end;
		end = temp;
	}
	for (count = 0; start <= end; start++)
	{
		count = count + start;
		printf("%d\n", count);
	}
	return 0;
}