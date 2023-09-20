#include <stdio.h>
int main() {
	int guess = 0;
	int answer = 8;//´ð°¸
	do
	{
		printf("Please Enter The Number:");
		scanf("%d", &guess);
		if (guess < answer)
		{
			printf("Too Small!\n");
		}
		else if (guess > answer)
		{
			printf("Too Large!\n");
		}
		else
		{
			printf("Correct!\n");
		}
	} while (guess != answer);
	return 0;
}