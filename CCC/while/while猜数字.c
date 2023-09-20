#include <stdio.h>
int main() {
	int answer = 9;
	int guess = 0;
	int JiShu = 1;
	printf("请输入一个整数:");
	scanf("%d", &guess);
	while (JiShu == 1 || answer != guess)//多加一条判断,自增这个变量,可以让判断第一次保证进去.自增后,判断就只需要判断答案和猜想是否对等了.
	{
		if (answer < guess)
		{
			printf("猜的太大了!\n");
		}
		else
		{
			printf("猜的太小了!\n");
		}
		printf("请输入一个整数:");
		scanf("%d", &guess);
		JiShu++;
	}
	printf("恭喜!您猜到了数字!\n");
	printf("您总共用了%d次,猜到了数字!\n", JiShu);
	return 0;
}