#include <stdio.h>//abc=>cab
int main() {
	int a, b, c, t;
	printf("��������������");
	scanf("%d%d%d", &a, &b, &c);
	t = a;
	a = c;
	c = b;
	b = t;
	printf("����������˳����:%d %d %d\n", a, b, c);
	return 0;
}