//#include <stdio.h>
//int main() {
//	printf("�����������ε������߳�:");
//	int a, b, c;
//	scanf("%d", &a);
//	scanf("%d", &b);			scanf("%d%d%d",&a,&b,&c);
//	scanf("%d", &c);			��������������������,д����scanfһ������.
//	if (a==b && b==c)
//	{
//		printf("����һ���ȱ�������\n");
//	}
//	if (a!=b || b!=c)
//	{
//		printf("�ⲻ��һ���ȱ�������\n");
//	}
//	return 0;
//}�������Լ�����д��ʽ,����������ͬ����ֵ,�������벻ͬ����ֵ,û�з�����ʾ����.
#include <stdio.h>
int main() {
	int side1, side2, side3;
	printf("Please Enter The Lengths:");
	scanf("%d%d%d", &side1, &side2, side3);
	if (side1==side2 && side2==side3)
	{
		printf("Regular Triangle\n");
	}
	//if (side1==side2)
	//{
	//	if (side2==side3)
	//	{
	//		printf("Regular Triangle\n");
	//	}
	//}
	//printf("Not a Regular Triangle\n");
	return 0;
}