//#include <stdio.h>
//int f(int x) {
//	return x + 3;//���Ǽӷ��ĺ���.
//}
//int main() {
//	printf("%d\n", f(4));
//	return 0;
//}

#include <stdio.h>
double div2(double x) {//���ǳ����ĺ���.
	return x / 2;
}
int main() {
	int N;
	printf("N=");
	scanf("%d", &N);
	printf("%f\n", div2(N));
	return 0;
}