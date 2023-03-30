#include <stdio.h>
int main() {
	int num1, num2, num3;
	printf("请输入第一个整数:");
	scanf("%d", &num1);
	printf("请输入第二个整数:");
	scanf("%d", &num2);
	printf("请输入第三个整数:");
	scanf("%d", &num3);
	//int sum;
	double sum;
	//sum = (num1 + num2 + num3) / 3;
	sum = (num1 + num2 + num3) / 3.0;//sum = (num1 + num2 + num3) / (double) 3;第一种是隐形转型,第二种是显性转型.在这期间都会产生一个暂时的替代品,第一种方法是相对简单快捷的.
	//printf("平均数为:%d\n", sum);
	printf("平均数为:%f\n", sum);
	return 0;
}