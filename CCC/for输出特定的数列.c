//#include <stdio.h>
//int main() {//���1~10��,����3�ı�����ż��.
//	int count;
//	for (count = 1; count <= 10; count++)
//	{
//		if (count % 2 == 0 && count % 3 != 0)
//		{
//			printf("%d\n", count);
//		}
//	}
//}
#include <stdio.h>
int main() {//���1~10��,����3�ı�����ż��.
	int count;
	for (count = 2; count <= 10; count+=2)
	{
		if (count % 3 != 0)
		{
			printf("%d\n", count);
		}
	}
}