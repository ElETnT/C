#include <stdio.h>
int main() {
	int integer1, integer2, integer3;
	printf("�������һ������:");
	scanf("%d", &integer1);
	printf("������ڶ�������:");
	scanf("%d", &integer2);
	printf("���������������:");
	scanf("%d", &integer3);

	int integer0;
	integer0 = integer1;//integer0, integer1  0, 1
	integer1 = integer2;//integer1, integer2  1, 2
	integer2 = integer3;//integer2, integer3  2, 3
	integer3 = integer0;//integer3, integer0  3, 1

	printf("������ĵ�һ������Ϊ:%d", integer1);
	printf("�����������������Ϊ:%d", integer2);
	printf("�����������������Ϊ:%d", integer3);
	return 0;
}
/*ÿ������������ֱ�Ϊ1, 2, 3.��һ�εĽ��Ϊ:2, 3, 1.*
*							  �ڶ��εĽ��Ϊ:1, 2, 1.*
*							  �ڶ��εĽ��Ϊ:2, 2, 1.*
*							  ���ĴεĽ��Ϊ:2, 3, 1.*
*					��ʵ��һ�ν���Ͷ���,û����ϸ����*/