//#include <stdio.h>
//int main() {
//	int a, b, max;
//	printf("Enter First Number:");
//	scanf("%d", &a);
//	printf("Enter Second Number:");
//	scanf("%d", &b);
//	if (a >= b)
//	{
//		max = a;
//	}
//	else
//	{
//		max = b;
//	}
//	printf("Max=%d", max);
//	return 0;
//}

#include <stdio.h>
int max2(int, int);
int main() {
	int a, b;
	/*int max;*/
	printf("Enter First Number:");
	scanf("%d", &a);
	printf("Enter Second Number:");
	scanf("%d", &b);
	printf("Max=%d", max2(a, b));//����max2(a,b)�����õĴ����еı�����,���������õĺ����е�����.
	return 0;
}
int max2(int a, int b) {//���������еı�����,�����������еı�����,û���κ�ֱ�ӹ�ϵ.
	int max;//max��ֵ�Ƿ��ظ�max2,printf�������max2��ֵ.
	/*if (a >= b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	return max;*/
	if (a>=b)
	{
		return a;
	}
	else
	{
		return b;
	}//���ǵڶ��ַ�ʽ,���ַ�ʽ���и�����ȱ��,�����Ż�֪��������ʲô,��ǰֻ���ṩ˼·.
}