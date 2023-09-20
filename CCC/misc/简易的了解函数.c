//#include <stdio.h>
//int f(int x) {
//	return x + 3;//这是加法的函数.
//}
//int main() {
//	printf("%d\n", f(4));
//	return 0;
//}

#include <stdio.h>
double div2(double x) {//这是除法的函数.
	return x / 2;
}
int main() {
	int N;
	printf("N=");
	scanf("%d", &N);
	printf("%f\n", div2(N));
	return 0;
}