#include <stdio.h>
int main() {
	int start = 0;
	int end = 0;
	printf("ÇëÊäÈë1¸öÊı×Ö:");
	scanf("%d", &end);
	for (start = 1; start <= end; start++)
	{
		if (start % 3 == 2 && start % 5 == 3 && start % 7 == 2)
		{
			printf("%d\n", start);
		}
	}
	return 0;
}