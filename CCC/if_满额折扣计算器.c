#include <stdio.h>
int main() {
	int num, total, original;
	printf("�����뱾���ò�����:");
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
	printf("�����ò�����:%d\n", total);
	return 0;
}