#include <stdio.h>
int main() {
	int a, b, c, mid;
	printf("请输入三个数字:");
	scanf("%d%d%d", &a, &b, &c);
	if (b<=a && a<=c || c<=a && a<=b)
	{
		mid = a;
	}
	if (a<=b && b<=c || c<=b && b<=a)
	{
		mid = b;
	}
	if (a<=c && c<=b || b<=c && c<=a)
	{
		mid = c;
	}
	/*if (a==b && b==c)
	{
		printf("中间数是:%d\n", a);
	}*/
	printf("中间数是:%d\n", mid);
	return 0;
}
//a:b<a<c c<a<b
//b:a<b<c c<b<a
//c:a<c<b b<c<a
//谁是中间数谁就丢到中间去,五位数也是如此,a,b,c,d,e   a:b<c<a<d<e  e<d<a<c<b