//#include <stdio.h>
//int main() {//�������ж�
//	int N;
//	printf("N=");
//	scanf("%d", &N);
//	int jishu = 0;
//	int num;
//	for (num = 2; num < N; ++num)//С��N���൱��N-1.
//	{
//		if (N % num == 0)
//		{
//			++jishu;
//		}
//	}
//	if (jishu == 0)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {//�������ж�
//	int N;
//	printf("N=");
//	scanf("%d", &N);
//	int XianJing = 1;//1Ϊ��,0Ϊ��.
//	int num;
//	for (num = 2; num < N && XianJing; ++num)//С��N���൱��N-1.��һ���ж�����,���������0(�ٵ�)�ͻ�����ѭ��,�ó��������һ��.
//	{
//		if (N % num == 0)
//		{
//			XianJing = 0;//������ַ������ж�,�ͻ��1�ĳ�0(��ĳɼ�).
//		}
//	}
//	//if (XianJing)//���һֱΪ��,���ͻ����Yes.��Ϊ���������涨�����1Ϊ��,0Ϊ��,ֻ��1��0,if���жϷ�ʽΪ,0Ϊ��,����Ϊ��.����һ�ּ�.
//	//{
//	//	printf("Yes\n");
//	//}
//	if (XianJing == 1)//���һֱΪ��,���ͻ����Yes.
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main() {
	int N;
	printf("N=");
	scanf("%d", &N);
	int num;
	for (num = 2; num < N && N % num != 0; ++num)//�ж������ӵ�for����,numС��N,����Nȡ��num�Ľ��������0,ѭ���Ż����,�����жϲ������ͻ�����ѭ��.
	//{
	//}
	if (num == N)//������жϷ�ʽ��,���ѭ������һֱ���ǳ�����,num��������N,��������ֻҪ����ȵ�,�ʹ����������ֵ������.
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}