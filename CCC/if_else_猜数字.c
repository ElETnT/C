#include <stdio.h>
int main() {
	int a = 6;
	int b = 0;
	printf("������0~10֮�������:");
	scanf("%d", &b);
	if (a < b)
	{
		printf("��Ǹ,��µ�����̫����!\n");
	}
	else
	{
		if (a > b)
		{
			printf("��Ǹ,��µ�����̫С��!\n");
		}
		//else if (a == b)
		//{
		//	printf("��ϲ��,�µ����������!\n");
		//}
		else
		{
			printf("��ϲ��,�µ����������!\n");
		}
	}
	return 0;
}