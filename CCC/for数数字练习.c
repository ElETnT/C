//#include <stdio.h>
//int main() {//从1输出到10
//	int count;
//	for (count = 1; count <= 10; count++)
//	{
//		printf("%d\n", count);
//	}
//}

//#include <stdio.h>
//int main() {//起点先输入,然后输入终点.在循环里给count先赋值"start",然后判断count是不是小于等于"end".count自增.
//	int start = 0;
//	int end = 0;
//	int count = 0;
//	printf("请输入起点和终点:");
//	scanf("%d %d", &start, &end);
//	for (count = start; count <= end; count++)
//	{
//		printf("%d\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {//从10输出到1
//	int count = 0;
//	for (count = 10; count >= 1; count--)
//	{
//		printf("%d\n", count);
//	}
//
//	return 0;
//}

#include <stdio.h>
int main() {
	int count = 0;
	for (count = 1; count <= 10; count++)
	{
		int num = 11 - count;//count作为计数器使用,num是真正的输出值.
		printf("%d %d\n", count, num);
	}

	return 0;
}