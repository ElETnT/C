//#include <stdio.h>//�Լ�д��,ɲ��ס��,��ʱ��֪����ô����ѭ��
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	int answer = 0;
//	for (num1 = 2, num2 = 1; num2 <= 9; ++num2)
//	{
//		if (num2 == 9)
//		{
//			num2 = 1;
//			++num1;
//		}
//		printf("%d x %d = %d\n", num1, num2, (num1*num2));
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	int num1;
//	int num2;
//	for (num1 = 1; num1 <= 9; ++num1)//���ǵ�һ������,�����ַ�ʽ���Լ�.
//	{
//		for (num2 = 1; num2 <= 9; ++num2)//���������ж���������,�����ѭ����������,��ȥ�����ѭ���ж�.
//		{
//			printf("%d x %d = %d\n", num2, num1, (num1 * num2));
//		}
//	}
//	return 0;
//}

#include <stdio.h>
int main() {
	int c;
	for (c=1;c<=81;++c)
	{
		int i = (c - 1) / 9 + 1;//ֻ��9�������9�ı���,�ſ���������,Ȼ��+1,ʵ�ֵ���.
		int j = (c - 1) % 9 + 1;//��cС��9��ʱ���������Ǵ�.��c����9֮������+1Ҳ�Ǵ�.ͨ��ȡ�����ѭ��.
		printf("%d x %d = %d\n", i, j, i * j);
	}
	return 0;
}