//#include <stdio.h>//����
//int main() {
//	int count = 0;
//	for (count = 1; count <= 10; count += 2)	for (count = 2; count <= 10; count += 2)//ż��
//	{
//		printf("%d\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>//����
//int main() {
//	int count = 0;
//	for (count = 1; count <= 5; count++)
//	{
//		int num = 0;
//		num = 2 * count - 1;
//		printf("%d %d\n", num, count);
//	}
//}

//#include <stdio.h>//ż��
//int main() {
//	int count = 0;
//	for (count = 2; count <= 5; count++)
//	{
//		int num = 0;
//		num = 2 * count;
//		printf("%d %d\n", num, count);
//	}
//}

//#include <stdio.h>//����
//int main() {
//	int count;
//	for (count = 1; count <= 10; count++)
//	{
//		if (count % 2 == 1)//countȡ��֮���ֵ�Ƿ����1,�������,�Ǿ����,�������,������.
//		{
//			printf("%d\n", count);
//		}
//	}
//	return 0;
//}

#include <stdio.h>//ż��
int main() {
	int count;
	for (count = 1; count <= 10; count++)
	{
		if (count % 2 == 0)//countȡ��֮���ֵ�Ƿ����0,�������,�Ǿ����,�������,������.
		{
			printf("%d\n", count);
		}
	}
	return 0;
}