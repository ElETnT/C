#include <stdio.h>
int main() {
	int a, b, c, mid;
	printf("��������������:");
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
		printf("�м�����:%d\n", a);
	}*/
	printf("�м�����:%d\n", mid);
	return 0;
}
//a:b<a<c c<a<b
//b:a<b<c c<b<a
//c:a<c<b b<c<a
//˭���м���˭�Ͷ����м�ȥ,��λ��Ҳ�����,a,b,c,d,e   a:b<c<a<d<e  e<d<a<c<b