#include <stdio.h>
int main() {
	int side1, side2, side3;
	printf("�����������߳�:");
	scanf("%d %d %d", &side1, &side2, &side3);
	if (side1 == side2 && side2 == side3)
	{
		printf("�ȱ�������\n");
	}
	if (side1 == side2 || side1 == side3 || side2 == side3)
	{
		printf("����������\n");
	}
	if ((side1 * side1) + (side2 * side2) == (side3 * side3) ||
		(side1 * side1) + (side3 * side3) == (side2 * side2) ||
		(side2 * side2) + (side3 * side3) == (side1 * side1))
	{
		printf("ֱ��������\n");
	}
	return 0;
}