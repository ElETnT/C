#include <stdio.h>//��С��������
int main() {
	int a, b, c, d;
	printf("��������������:");
	scanf("%d%d%d", &a, &b, &c);
	/*if (a <= b && b <= c)
	{
		printf("��С���������˳��Ϊ:%d %d %d", a, b, c);
	}*/
	//if (!(a <= b && b <= c))//a=9 b=2 c=7
	//{
	//	d = a;
	//	a = b;
	//	b = c;
	//	c = d;
	//}
	//if (!(a <= b && b <= c))//a=7 b=9 c=2
	//{
	//	d = a;
	//	a = c;
	//	c = b;
	//	b = d;
	//}
	//return 0;
	if (a>b)
	{
		d = a;
		a = b;
		b = d;
	}
	if (a>c)
	{
		d = a;
		a = c;
		c = a;
	}
	if (b>c)
	{
		d = b;
		b = c;
		c = d;
	}
}
//����ʽ��ʲô�й���?
//�Ǹ�a,b,cԭ��ֵ�Ĵ�С˳���й�