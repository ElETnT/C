//#include <stdio.h>
//int main() {
//	int side1, side2, side3;
//	printf("���С�����������������߳�:");
//	scanf("%d%d%d", &side1, &side2, &side3);
//	if (side1 <= side2 <= side3)
//	{
//		if (side1 == side3)
//		{
//			printf("�ȱ�������(����������)\n");
//		}
//		if (side1 == side2 || side2 == side3)
//		{
//			printf("����������(�����ǵȱ�������)\n");
//		}
//		if ((side1 * side1) + (side2 * side2) == (side3 * side3))
//		{
//			printf("ֱ��������\n");
//		}
//	}
//	else
//	{
//		printf("�밴�ճ���Ҫ������!\n");
//	}
//	return 0;
//}
#include <stdio.h>
int main() {
	int side1, side2, side3, side4;
	printf("���С�����������������߳�:");
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
				printf("�ȱ�������(����������)\n");
			}
			if (side1 == side2 || side2 == side3)
			{
				printf("����������(�����ǵȱ�������)\n");
			}
			if ((side1 * side1) + (side2 * side2) == (side3 * side3))
			{
				printf("ֱ��������\n");
			}
		}
	}
	else
	{
		printf("����������,�޷�����������.\n");
	}
	return 0;
}