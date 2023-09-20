//#include <stdio.h>
//int i = 1;//全局变量,全局都可以看到这个变量.
//int main() {
//	printf("%d ", i);//i=1
//	int i = 2;//局部变量,main函数内的局部变量
//	printf("%d ", i);//i=2
//	{
//		printf("%d ", i);//i=2,这个printf会输出2,是因为会选择离他最近的那个变量(变量名称的遮蔽),而且代码运行时,只会看上面有什么,而不是看下面有什么.
//		int i = 3;//局部变量,只存在于当前大括号内.
//		printf("%d ", i);//i=3
//	}
//	printf("%d ", i);//i=2,这个printf是无法看到int i=3;的,因为不是在一个区块内,这个printf是在main函数内的,所以只能看到全局变量int i=1;还有int i=2;,往上看,int i=2;离的是最近的,加上变量名称遮蔽,都会选择int i=2;.
//	return 0;
//}

//#include <stdio.h>
//int i = 5;
//
//int f() {
//	i = i + 1;//①②③是代表运行顺序.
//	printf("%d\n", i);//②i=(5+1=)6,main函数内虽然有定义int i=6;但是函数呼叫之后,会跳到函数内,函数内没有定义,并且只能看到全局定义的int i=5;所以输出的也是i=i+1;的值.
//	return 0;
//}
//
//int main() {
//	printf("%d\n", i);//①i=5,因为是从main函数最先运行的,函数内的输出是先看到了全局定义的int i=5;
//	int i = 6;
//	i = i + 1;
//	f();
//	printf("%d", i);//③i=(6+1=)7,函数呼叫完成后,这printf能看到全局变量和局部变量,都能看到选最近,所以会看到int i=6;然后i=i+1;等于7.
//	return 0;
//}

#include <stdio.h>
int main() {
	int i = 3;
	printf("%d\n", i);//3
	if (i==3)//判断的是main里面的i,等于3,进入判断.
	{
		i = i + 1;//i=4(main中的i)
		int i = 6;//if中定于的i=6,
		printf("%d\n", i);//6
		i = i + 1;//if中定义的i,7=(6+1=)7
	}
	if (i==3)//这里是判断main函数中定义的i,因为在上面的if里面给加1了,所以现在main函数中的i是4,无法进入判断.
	{
		printf("%d\n", i);//3.回答错误,上面两个倒是对了.
	}
	return 0;
}