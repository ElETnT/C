#include <stdio.h>
int main() {
	int num1, num2, num3;
	printf("�������һ������:");
	scanf("%d", &num1);
	printf("������ڶ�������:");
	scanf("%d", &num2);
	printf("���������������:");
	scanf("%d", &num3);
	//int sum;
	double sum;
	//sum = (num1 + num2 + num3) / 3;
	sum = (num1 + num2 + num3) / 3.0;//sum = (num1 + num2 + num3) / (double) 3;��һ��������ת��,�ڶ���������ת��.�����ڼ䶼�����һ����ʱ�����Ʒ,��һ�ַ�������Լ򵥿�ݵ�.
	//printf("ƽ����Ϊ:%d\n", sum);
	printf("ƽ����Ϊ:%f\n", sum);
	return 0;
}