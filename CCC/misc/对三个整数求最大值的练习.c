#include <stdio.h>
int max2(int, int);
int max3(int, int, int);//��������(����)

int main() {
	int a, b, c;
	printf("Enter Three Number:");
	scanf("%d %d %d", &a, &b, &c);
	printf("MAX=%d", max3(a, b, c));//������max3(a,b,c)��main�����abc!!!
}

//���������
//int max3(int a, int b, int c) {//�������abc��max3�����ж����abc!!!
//	int max = a;
//	if (b > max)
//	{
//		max = b;
//	}
//	if (c > max)
//	{
//		max = c;
//	}
//	return max;
//}
int max3(int a, int b, int c) {
	return max2(max2(a, b), c);//�ȼ���max2(a,b);Ȼ�����max2(�ش�ֵ,c);return�����ֵ�ش����������д�,���Ʋ���Ҫ.
}
int max2(int a, int b) {//�Ƚ�a��b�Ĵ�С.
	if (a>=b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
