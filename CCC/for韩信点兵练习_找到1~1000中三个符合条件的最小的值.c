//#include <stdio.h>
//int main() {
//	int num = 0;
//	int count = 0;
//	int jishu = 0;
//	for (count = 1; count <= 1000; ++count)
//	{
//		if (count % 3 == 2 && count % 5 == 3 && count % 7 == 2)
//		{
//			++jishu;
//			if (jishu <= 3)
//			{
//				num = count;
//				printf("%d ", num);
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {//�ҳ�1~1000�е���С��ǰ����ֵ
//	int num;
//	int count = 0;
//	for (num = 1; num <= 1000 && count <= 3; ++num)
//	{
//		if (num % 3 == 2 && num % 5 == 3 && num % 7 == 2)
//		{
//			++count;
//			if (count <= 3)
//			{
//				printf("%d ", num);
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {//�ҳ�1~1000�е����ĺ�����ֵ
//	int num;
//	int count = 0;
//	for (num = 1000; num >= 1 && count <= 3; --num)
//	{
//		if (num % 3 == 2 && num % 5 == 3 && num % 7 == 2)
//		{
//			++count;
//			if (count <= 3)
//			{
//				printf("%d ", num);
//			}
//		}
//	}
//	return 0;
//}

#include <stdio.h>
int main() {//�ҳ�1~1000�е�������С��ֵ
	int num;
	int count = 0;
	for (num = 1000; num >= 1 && count <= 3; --num)
	{
		if (num % 3 == 2 && num % 5 == 3 && num % 7 == 2)
		{
			++count;
			if (count == 3)
			{
				printf("%d ", num);
			}
		}
	}
	return 0;
}