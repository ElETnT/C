//#include <stdio.h>//��С��������2������.
//int main() {
//	int side1, side2, side3;
//	printf("��������������:");
//	scanf("%d%d", &side1, &side2);
//	if (side1 > side2)
//	{
//		side3 = side1;
//		side1 = side2;
//		side2 = side3;
//		printf("��С����Ϊ:%d %d", side1, side2);
//	}
//	if (side1 == side2)
//	{
//		printf("��������������ȵ�.\n");
//	}
//	return 0;
//}
#include <stdio.h>//�������ִ�С���������
int main() {
	int side1, side2, side3, side4;
	printf("��������������:");
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
	printf("��С���������˳��Ϊ:%d %d %d\n", side1, side2, side3);
	if (side1 == side2 && side2 == side3)
	{
		printf("��������������ȵ�.\n");
	}
	return 0;
}