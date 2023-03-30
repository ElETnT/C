#include <stdio.h>
int main() {
	int found = 0;
	printf("ID:");
	scanf("%d", &found);
	switch (found)
	{
	case 2:
		printf("John\n");
		break;
	case 13:
		printf("Mary\n");
		break;
	case 16:
		printf("Amy\n");
		break;
	default:
		printf("Not Found!\n");
	}
	return 0;
}