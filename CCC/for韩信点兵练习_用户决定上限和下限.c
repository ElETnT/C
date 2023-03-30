#include <stdio.h>
int main() {
	int start = 0;
	int end = 0;
	int temp = 0;
	printf("MIN=");
	scanf("%d", &temp);
	printf("MAX=");
	scanf("%d", &end);
	for (start = temp; start <= end; start++)
	{
		if (start % 3 == 2 && start % 5 == 3 && start % 7 == 2)
		{
			printf("%d\n", start);
		}
	}
	return 0;
}