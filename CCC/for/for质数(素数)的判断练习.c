//#include <stdio.h>
//int main() {//质数的判断
//	int N;
//	printf("N=");
//	scanf("%d", &N);
//	int jishu = 0;
//	int num;
//	for (num = 2; num < N; ++num)//小于N就相当于N-1.
//	{
//		if (N % num == 0)
//		{
//			++jishu;
//		}
//	}
//	if (jishu == 0)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {//质数的判断
//	int N;
//	printf("N=");
//	scanf("%d", &N);
//	int XianJing = 1;//1为真,0为假.
//	int num;
//	for (num = 2; num < N && XianJing; ++num)//小于N就相当于N-1.加一个判断条件,如果陷阱变成0(假的)就会跳出循环,让程序进行下一步.
//	{
//		if (N % num == 0)
//		{
//			XianJing = 0;//如果数字符合了判断,就会把1改成0(真改成假).
//		}
//	}
//	//if (XianJing)//如果一直为真,最后就会输出Yes.因为这里在上面定义的是1为真,0为假,只有1和0,if的判断方式为,0为错,非零为对.算是一种简化.
//	//{
//	//	printf("Yes\n");
//	//}
//	if (XianJing == 1)//如果一直为真,最后就会输出Yes.
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main() {
	int N;
	printf("N=");
	scanf("%d", &N);
	int num;
	for (num = 2; num < N && N % num != 0; ++num)//判断条件加到for里面,num小于N,而且N取余num的结果不等于0,循环才会继续,否则判断不成立就会跳出循环.
	//{
	//}
	if (num == N)//这里的判断方式是,如果循环条件一直都是成立的,num最后会数到N,所以他俩只要是相等的,就代表输入的数值是质数.
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}