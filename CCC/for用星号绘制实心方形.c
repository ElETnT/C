#include <stdio.h>
int main() {
	int N;
	printf("N=");
	scanf("%d", &N);//���������Ҫȥ˼��һ��,i��j��ϵ,�Լ����ʱ,��������ֵ(����).
	int j, i;//j�ǿ����м���,i�ǿ���һ���м���.
	for (j = 1; j <= N; ++j)
	{
		for (i = 1; i <= N; ++i)//ÿһ��
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}