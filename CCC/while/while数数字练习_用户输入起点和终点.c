#include <stdio.h>
int main() {
	int N = 0;
	int M = 1;
	printf("Please Enter The Number:");
	scanf("%d %d", &M, &N);
	if (N == 0)
	{
		printf("Error");
	}
	else
	{
		while (M <= N)
		{
			printf("%d\n", M);
			M++;
		}
		printf("End!\n");
	}
	return 0;
}