#include <stdio.h>
int main() {
	int num;
	int num1 = 0;
	float sum = 0;
	int CiShu = 0;
	printf("Please Enter The Number:");
	scanf("%d", &num);
	if (num == 0)//C语言中,0不能除以0.
	{
		printf("Sum is:N/A\n");
	}
	else
	{
		while (num != 0)
		{
			CiShu++;
			num1 = num1 + num;
			printf("Please Enter The Number:");
			scanf("%d", &num);
		}
		sum = (float)num1 / CiShu;
		printf("Sum is:%f (%d)\n", sum, CiShu);
	}
	return 0;
}