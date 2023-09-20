#include <stdio.h>
int main() {
	int start = 0;
	int end = 0;
	printf("请输入一个数字:");
	scanf("%d", &end);
	for (start=1;start<=end;start++)
	{
		printf("*");
	}
	printf("\n");//还是需要换行的,看老师的结果补充的.
	return 0;
}