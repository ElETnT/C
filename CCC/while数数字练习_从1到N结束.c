#include <stdio.h>
int main() {
	int a = 0;
	int b = 1;
	printf("Please Enter The Number:");
	scanf("%d", &a);
	if (a == 0)
	{
		printf("Error");
	}
	else
	{
		while (b <= a)
		{
			printf("%d\n", b);
			b++;
		}
		printf("End!\n");
	}
	return 0;
}