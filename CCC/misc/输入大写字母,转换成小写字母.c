#include <stdio.h>
int main() {
	char input, output;
	scanf("%c", &input);
	//output = input + 32;//ֻҪ��+32,��д����Ԫ�Ϳ���ת����Сд����Ԫ.32����ΪASCII����,a-A=32.
	output = input + ('a' - 'A');
	//'a'��Ӧ����97,'A'��Ӧ����65.
	printf("%c\n", output);
	return 0;
}