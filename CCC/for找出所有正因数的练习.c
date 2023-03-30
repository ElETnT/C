#include <stdio.h>
int main() {
	int num = 0;
	printf("num=");
	int temp = 0;
	scanf("%d", &temp);
	for (num = 1;num<=temp;++num)
	{
		if (temp%num==0)
		{
			printf("%d ", num);
		}
	}
	return 0;
}