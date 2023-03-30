//#include <stdio.h>
//int main() {
//	int i, j;
//	for (i = 1; i <= 5; ++i)
//	{
//		for (j = 1; j <= 5; ++j)
//		{
//			printf("(%d,%d)", i, j);
//			/*if (i <= j)
//			{
//				printf("(%d,%d)", i, j);
//			}
//			else
//			{
//				printf(" ");
//			}*/
//		}
//		printf("\n");
//	}
//	return 0;
//}
//(1, 1)(1, 2)(1, 3)(1, 4)(1, 5)
//(2, 1)(2, 2)(2, 3)(2, 4)(2, 5)
//(3, 1)(3, 2)(3, 3)(3, 4)(3, 5)
//(4, 1)(4, 2)(4, 3)(4, 4)(4, 5)
//(5, 1)(5, 2)(5, 3)(5, 4)(5, 5)

//#include <stdio.h>
//int main() {
//	int i, j;
//	for (i = 1; i <= 5; ++i)
//	{
//		for (j = 1; j <= i; ++j)
//		{
//			printf("(%d,%d)", i, j);
//			/*if (i <= j)
//			{
//				printf("(%d,%d)", i, j);
//			}
//			else
//			{
//				printf(" ");
//			}*/
//		}
//		printf("\n");
//	}
//	return 0;
//}
//(1, 1)
//(2, 1)(2, 2)
//(3, 1)(3, 2)(3, 3)
//(4, 1)(4, 2)(4, 3)(4, 4)
//(5, 1)(5, 2)(5, 3)(5, 4)(5, 5)

//#include <stdio.h>
//int main() {
//	int i, j;
//	for (i = 1; i <= 5; ++i)
//	{
//		for (j = 1; j <= 5; ++j)
//		{
//			/*printf("(%d,%d)", i, j);*/
//			if (i == j)
//			{
//				printf("(%d,%d)", i, j);
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//(1, 1)
//	(2, 2)
//		(3, 3)
//			(4, 4)
//				(5, 5)

//#include <stdio.h>
//int main() {
//	int N;
//	printf("N=");
//	scanf("%d", &N);
//	int i, j;
//	for (i = 1; i <= N; ++i)
//	{
//		for (j = 1; j <= N; ++j)
//		{
//			if (j == 1 || i == N || i == j)
//				//j==1是画最左边的那条竖线,i==N是画最下面的那一条线,i==j是画对角线(斜线).
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//*
//**
//* *
//*  *
//*   *
//*    *
//*     *
//*      *
//*********

//#include <stdio.h>
//int main() {
//	int N;
//	printf("N=");
//	scanf("%d", &N);
//	int i, j;
//	for (i = 1; i <= N; ++i)
//	{
//		for (j = 1; j <= N; ++j)
//		{
//			if (i + j >= N + 1)
//				//如果想要三角形靠右,那么对角线是N+1的值,所以判断是否相等,就可以画出靠右侧的实心三角形了.
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//    *
//   **
//  ***
// ****
//*****

//#include <stdio.h>
//int main() {
//	int N;
//	printf("N=");
//	scanf("%d", &N);
//	int i, j;
//	for (i = 1; i <= N; ++i)
//	{
//		for (j = 1; j <= N; ++j)
//		{
//			if (j == N || i == N || i + j == N + 1)
//				//如果想要三角形靠右,那么对角线是N+1的值,所以判断是否相等,就可以画出靠右侧的实心三角形了.
//				//j==N是为了印出右侧的那一列,i==N是为了印出最后一行,i+j==N+1是为了印出斜线(对角线).
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//    *
//   **
//  * *
// *  *
//*****

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
			if (i == 1 || j == N || i == j)
				//三角形在右上角印出
				//i==1是最上面那一行.j==N是最右侧的那一行.i==j是对角线.
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
//*****
// *  *
//  * *
//   **
//    *