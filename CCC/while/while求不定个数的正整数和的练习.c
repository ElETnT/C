#include <stdio.h>
int main() {
	int a, b = 0;
	int c = 1;//�������0��ʱ�����������,�Ǿ͸�c����Ϊ0.
	printf("Please Enter The Number:");
	scanf("%d", &a);
	while (a != 0)
	{
		c++;
		b = b + a;
		printf("Please Enter The Number:");
		scanf("%d", &a);
	}
	printf("Sum is %d\n (%d)", b, c);
	return 0;
}