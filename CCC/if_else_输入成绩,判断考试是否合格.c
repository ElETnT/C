#include <stdio.h>
int main() {
	int ChengJi;
	printf("请输入考试成绩:");
	scanf("%d", &ChengJi);
	if (ChengJi >= 60)
	{
		printf("恭喜您通过了考试!\n");
	}
	else
	{
		printf("抱歉您没有通过考试!\n");
	}
	return 0;
}