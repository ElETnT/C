#include <stdio.h>
int main() {
	int num1, num2;
	char op;//��Ԫ��ʽ,��������Ӽ��˳��ķ���.
	float answer;
	printf("������һ����ʽ(��������):");
	scanf("%d%c%d", &num1, &op, &num2);//��Ԫ�ж��Ƿ���ȷ����һ��,��Ҫ�õ�����.�ڵ������������жϵ�����.
	if (op == '+')
	{
		answer = num1 + num2;
	}
	else if (op == '-')
	{
		answer = num1 - num2;
	}
	else if (op == '*')
	{
		answer = num1 * num2;
	}else if (op == '/')//�������ȷ��ʹ����ֻ�����������ַ���,����һ��if����ɾ����.
	{
		answer = (float)num1 / num2;//����ʽǰ���(float)��ǿ��ת�ͳɸ�����,��Ȼ�������,�õ��Ľ��Ҳ������.
	}
	printf("����:%f\n", answer);
	return 0;
}