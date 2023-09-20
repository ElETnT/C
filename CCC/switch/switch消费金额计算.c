//#include <stdio.h>
//int main() {	//1,90  2,75  3,83  4,89  5,71
//	int total = 0;
//	int id = 0;
//	do
//	{
//		switch (id)
//		{
//			scanf("%d", &id);
//		case 1:total += 90;
//			break;
//		case 2:total += 75;
//			break;
//		case 3:total += 83;
//			break;
//		case 4:total += 89;
//			break;
//		case 5:total += 71;
//		}
//	} while (id == 0);
//	printf("total:%d\n", total);
//	return 0;
//}
#include <stdio.h>//1,90  2,75  3,83  4,89  5,71
int main() {
	int total = 0;
	int id = 0;
	printf("«Î ‰»Î…Ã∆∑±‡∫≈:");
	do 
	{
		scanf("%d", &id);
		switch (id)
		{
		case 1:total += 90;
			break;
		case 2:total += 75;
			break;
		case 3:total += 83;
			break;
		case 4:total += 89;
			break;
		case 5:total += 71;
			break;
		}
	} while (id != 0);
	printf("Total:%d\n", total);
	return 0;
}