//#include <stdio.h>//��
//int main() {//���ַ�ʽ��ͨ���ݼ��ķ�ʽ�����Ŀ���,�Ӵ���С����ö��,Ȼ������ҵ��ĵ�һ������.
//	int max = 0;
//	printf("MAX=");
//	scanf("%d", &max);
//	int num; num = max;
//	while (num > 0 && !(num % 3 == 2 && num % 5 == 3 && num % 7 == 2))
//	{
//		--num;
//	}
//	if (num > 0)
//	{
//		printf("%d\n", num);
//	}
//	else
//	{
//		printf("Error!\n");
//	}
//	return 0;
//}

//#include <stdio.h>//�����ַ�ʽ��ͨ�������������ֵ��,ÿ��answer���ᴢ�����µķ���������num.��������û�ҵ�����������,answer��ֵ,���ɻ���0,�ͻ�����û�,�Ҳ�������������ֵ.
//int main() {
//	int max = 0;
//	printf("MAX=");
//	scanf("%d", &max);
//	int num;
//	int answer = 0;
//	for (num = 1; num <= max; ++num)
//	{
//		if (num % 3 == 2 && num % 5 == 3 && num % 7 == 2)
//		{
//			answer = num;
//		}
//	}
//	/*if (answer != 0)
//	{
//		printf("%d", answer);
//	}*/
//	if (answer == 0)
//	{
//		printf("�Ҳ�������������ֵ!\n");
//	}
//	else
//	{
//		printf("%d", answer);
//	}
//	return 0;
//}

//#include <stdio.h>//������δ�����answer�ᱣ����С����һ����ֵ.
//int main() {
//	int num = 0;
//	int max = 0;
//	int answer = 0;
//	printf("MAX=");
//	scanf("%d", &max);
//	for (num = max; num >= 1; --num)
//	{
//		if (num % 3 == 2 && num % 5 == 3 && num % 7 == 2)
//		{
//			answer = num;
//		}
//	}
//	if (answer == 0)
//	{
//		printf("�Ҳ�������������ֵ!\n");
//	}
//	else
//	{
//		printf("%d", answer);
//	}
//	return 0;
//}

//#include <stdio.h>//��Plus.ͨ���ж�����,������answer���ֵ֮��,������ѭ��.�����ӵõ�����ֵ֮��,�Ϳ���ֱ������ѭ�����������.
//int main() {
//	int num = 0;
//	int max = 0;
//	int answer = 0;
//	printf("MAX=");
//	scanf("%d", &max);
//	for (num = max; num >= 1 && answer == 0; --num)//��forѭ���е��ж�����Ҳ�ǿ�����&&��||��.
//	{
//		if (num % 3 == 2 && num % 5 == 3 && num % 7 == 2)
//		{
//			answer = num;
//		}
//	}
//	if (answer == 0)
//	{
//		printf("�Ҳ�������������ֵ!\n");
//	}
//	else
//	{
//		printf("%d", answer);
//	}
//	return 0;
//}

#include <stdio.h>
int main() {
	int max = 0;
	int num = 0;
	printf("MAX=");
	scanf("%d", &max);
	for (num = max; num >= 1; --num)
	{
		if (num % 3 == 2 && num % 5 == 3 && num % 7 == 2)
		{
			break;//�����������,break�ͻ�����ѭ��.
		}
	}
	if (num == 0)
	{
		printf("û���ҵ��Ϸ�����ֵ!\n");
	}
	else
	{
		printf("%d\n", num);
	}
	return 0;
}