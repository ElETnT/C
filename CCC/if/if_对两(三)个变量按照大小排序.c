#include <stdio.h>//从小到大排列
int main() {
	int a, b, c, d;
	printf("请输入三个数字:");
	scanf("%d%d%d", &a, &b, &c);
	/*if (a <= b && b <= c)
	{
		printf("从小到大的排列顺序为:%d %d %d", a, b, c);
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
//处理方式跟什么有关呢?
//是跟a,b,c原本值的大小顺序有关