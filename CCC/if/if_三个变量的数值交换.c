#include <stdio.h>//abc=>cab
int main() {
	int a, b, c, t;
	printf("请输入三个数字");
	scanf("%d%d%d", &a, &b, &c);
	t = a;
	a = c;
	c = b;
	b = t;
	printf("排序后的数字顺序是:%d %d %d\n", a, b, c);
	return 0;
}