#include <stdio.h>
int main() {
	int num1, num2;
	char op;//字元格式,用来储存加减乘除的符号.
	float answer;
	printf("请输入一个算式(四则运算):");
	scanf("%d%c%d", &num1, &op, &num2);//字元判断是否正确或者一致,需要用单引号.在单引号内输入判断的条件.
	if (op == '+')
	{
		answer = num1 + num2;
	}
	else if (op == '-')
	{
		answer = num1 - num2;
	}
	else if (op == '*')
	{
		answer = num1 * num2;
	}else if (op == '/')//如果可以确定使用者只能输入这四种符号,最后的一个if可以删除掉.
	{
		answer = (float)num1 / num2;//在算式前面加(float)是强制转型成浮点数,不然整数相乘,得到的结果也是整数.
	}
	printf("答案是:%f\n", answer);
	return 0;
}