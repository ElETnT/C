#include <stdio.h>
int main() {
	int side1, side2, side3;
	printf("请输入三条边长:");
	scanf("%d %d %d", &side1, &side2, &side3);
	if (side1 == side2 && side2 == side3)
	{
		printf("等边三角形\n");
	}
	if (side1 == side2 || side1 == side3 || side2 == side3)
	{
		printf("等腰三角形\n");
	}
	if ((side1 * side1) + (side2 * side2) == (side3 * side3) ||
		(side1 * side1) + (side3 * side3) == (side2 * side2) ||
		(side2 * side2) + (side3 * side3) == (side1 * side1))
	{
		printf("直角三角形\n");
	}
	return 0;
}