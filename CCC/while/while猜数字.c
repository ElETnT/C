#include <stdio.h>
int main() {
	int answer = 9;
	int guess = 0;
	int JiShu = 1;
	printf("������һ������:");
	scanf("%d", &guess);
	while (JiShu == 1 || answer != guess)//���һ���ж�,�����������,�������жϵ�һ�α�֤��ȥ.������,�жϾ�ֻ��Ҫ�жϴ𰸺Ͳ����Ƿ�Ե���.
	{
		if (answer < guess)
		{
			printf("�µ�̫����!\n");
		}
		else
		{
			printf("�µ�̫С��!\n");
		}
		printf("������һ������:");
		scanf("%d", &guess);
		JiShu++;
	}
	printf("��ϲ!���µ�������!\n");
	printf("���ܹ�����%d��,�µ�������!\n", JiShu);
	return 0;
}