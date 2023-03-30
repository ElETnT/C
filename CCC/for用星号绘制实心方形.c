#include <stdio.h>
int main() {
	int N;
	printf("N=");
	scanf("%d", &N);//这个程序需要去思考一下,i与j关系,以及输出时,他俩的数值(坐标).
	int j, i;//j是控制有几行,i是控制一行有几个.
	for (j = 1; j <= N; ++j)
	{
		for (i = 1; i <= N; ++i)//每一行
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}