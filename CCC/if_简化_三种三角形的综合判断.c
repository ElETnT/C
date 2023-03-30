//#include <stdio.h>
//int main() {
//	int side1, side2, side3;
//	printf("请从小到大依次输入三条边长:");
//	scanf("%d%d%d", &side1, &side2, &side3);
//	if (side1 <= side2 <= side3)
//	{
//		if (side1 == side3)
//		{
//			printf("等边三角形(等腰三角形)\n");
//		}
//		if (side1 == side2 || side2 == side3)
//		{
//			printf("等腰三角形(可能是等边三角形)\n");
//		}
//		if ((side1 * side1) + (side2 * side2) == (side3 * side3))
//		{
//			printf("直角三角形\n");
//		}
//	}
//	else
//	{
//		printf("请按照程序要求输入!\n");
//	}
//	return 0;
//}
#include <stdio.h>
int main() {
	int side1, side2, side3, side4;
	printf("请从小到大依次输入三条边长:");
	scanf("%d%d%d", &side1, &side2, &side3);
	if (side1 > side2)
	{
		side4 = side2;
		side2 = side1;
		side1 = side4;
	}
	if (side1 > side3)
	{
		side4 = side3;
		side3 = side1;
		side1 = side4;
	}
	if (side2 > side3)
	{
		side4 = side3;
		side3 = side2;
		side2 = side4;
	}
	if (side1 + side2 > side3 &&
		side1 + side3 > side3 &&
		side2 + side3 > side1 &&
		side1 > 0 &&
		side2 > 0 &&
		side3 > 0)
	{
		if (side1 <= side2 <= side3)
		{
			if (side1 == side2 && side2 == side3)
			{
				printf("等边三角形(等腰三角形)\n");
			}
			if (side1 == side2 || side2 == side3)
			{
				printf("等腰三角形(可能是等边三角形)\n");
			}
			if ((side1 * side1) + (side2 * side2) == (side3 * side3))
			{
				printf("直角三角形\n");
			}
		}
	}
	else
	{
		printf("条件不满足,无法构成三角形.\n");
	}
	return 0;
}