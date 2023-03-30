#include <stdio.h>
int main() {
	int answer = 4;
	int DaAn;
	printf("please enter:");
	scanf("%d", &DaAn);
	if (DaAn > 4)
	{
		printf("too large!\n");
	}
	else if (DaAn < 4)
	{
		printf("too small!\n");
	}
	else
	{
		printf("correct!\n");
	}
	if (DaAn != answer)
	{
		scanf("%d", &DaAn);
		if (DaAn > 4)
		{
			printf("too large!\n");
		}
		else if (DaAn < 4)
		{
			printf("too small!\n");
		}
		else
		{
			printf("correct!\n");
		}
	}
	return 0;
}