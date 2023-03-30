//#include <stdio.h>
//int main() {
//	int N = 0;
//	printf("N=");
//	scanf("%d", &N);
//	int i, j;
//	for (j = 1; j <= N; ++j)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (i = 1; i <= N - 2; ++i)
//	{
//		printf("*");
//		for (j = 1; j <= N - 2; ++j)
//		{
//			printf(" ");
//		}
//		printf("*\n");
//	}
//	for (j = 1; j <= N; ++j)
//	{
//		printf("*");
//	}
//	printf("\n");
//	return 0;
//}

#include <stdio.h>
int main() {
	int N;
	printf("N=");
	scanf("%d", &N);
	int i, j;
	for (i = 1; i <= N; ++i)
	{
		for (j = 1; j <= N; ++j)
		{
			if (i == 1 || i == N || j == 1 || j == N)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}