//#include <stdio.h>//从小到大排列2个变量.
//int main() {
//	int side1, side2, side3;
//	printf("请输入两个数字:");
//	scanf("%d%d", &side1, &side2);
//	if (side1 > side2)
//	{
//		side3 = side1;
//		side1 = side2;
//		side2 = side3;
//		printf("从小到大为:%d %d", side1, side2);
//	}
//	if (side1 == side2)
//	{
//		printf("这两个数字是相等的.\n");
//	}
//	return 0;
//}
#include <stdio.h>//三个数字从小到大的排列
int main() {
	int side1, side2, side3, side4;
	printf("请输入三个数字:");
	scanf("%d%d%d", &side1, &side2, &side3);
	if (side1 > side2)
	{
		side4 = side1;
		side1 = side2;
		side2 = side4;
	}
	if (side1 > side3)
	{
		side4 = side1;
		side1 = side3;
		side3 = side4;
	}
	if (side2 > side3)
	{
		side4 = side2;
		side2 = side3;
		side3 = side4;
	}
	printf("从小到大的排列顺序为:%d %d %d\n", side1, side2, side3);
	if (side1 == side2 && side2 == side3)
	{
		printf("这三个数字是相等的.\n");
	}
	return 0;
}