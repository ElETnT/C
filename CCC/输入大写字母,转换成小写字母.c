#include <stdio.h>
int main() {
	char input, output;
	scanf("%c", &input);
	//output = input + 32;//只要是+32,大写的字元就可以转换成小写的字元.32是因为ASCII编码,a-A=32.
	output = input + ('a' - 'A');
	//'a'对应编码97,'A'对应编码65.
	printf("%c\n", output);
	return 0;
}