#include <stdio.h>
int main() {
	int integer1, integer2;
	printf("�������һ������:");
	scanf("%d", &integer1);//3
	printf("������ڶ�������:");
	scanf("%d", &integer2);//5

	integer1 = integer1 + integer2;//8=3+5			/*integer1 = integer1 ^ integer2;*
	integer2 = integer1 - integer2;//5=8-5			 *integer2 = integer1 ^ integer2;*�����ַ���,��ʱû�н���,ֻ��˵�ܸܺ���.
	integer1 = integer1 - integer2;//8=8-5			 *integer1 = integer1 ^ integer2;*/

	printf("integer1:%d\n", integer1);
	printf("integer2:%d\n", integer2);
	return 0;
}
//����취�����������������,Ȼ�������,������ֵ����.������һ����������.