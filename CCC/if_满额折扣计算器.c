#include <stdio.h>
int main() {
	int num, total, original;
	printf("请输入本次用餐人数:");
	scanf("%d", &num);
	original = 300 * num;
	if (original < 3000)
	{
		total = original;
	}
	if
		(original >= 3000)
	{
		total = original * 0.8;
	}
	printf("本次用餐消费:%d\n", total);
	return 0;
}