//#include <stdio.h>
//int main() {//��1�����10
//	int count;
//	for (count = 1; count <= 10; count++)
//	{
//		printf("%d\n", count);
//	}
//}

//#include <stdio.h>
//int main() {//���������,Ȼ�������յ�.��ѭ�����count�ȸ�ֵ"start",Ȼ���ж�count�ǲ���С�ڵ���"end".count����.
//	int start = 0;
//	int end = 0;
//	int count = 0;
//	printf("�����������յ�:");
//	scanf("%d %d", &start, &end);
//	for (count = start; count <= end; count++)
//	{
//		printf("%d\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {//��10�����1
//	int count = 0;
//	for (count = 10; count >= 1; count--)
//	{
//		printf("%d\n", count);
//	}
//
//	return 0;
//}

#include <stdio.h>
int main() {
	int count = 0;
	for (count = 1; count <= 10; count++)
	{
		int num = 11 - count;//count��Ϊ������ʹ��,num�����������ֵ.
		printf("%d %d\n", count, num);
	}

	return 0;
}