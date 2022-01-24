#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i = 1;
//	/*while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}*/
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}

int main()
{
	int day = 0;
	scanf("%d ", &day);
	switch (day)
	{
	case 1:
		printf("打印星期一");
		break;
	case 2:
		printf("打印星期二");
		break;
	case 3:
		printf("打印星期三");
		break;
	case 4:
		printf("打印星期四");
		break;
	case 5:
		printf("打印星期五");
		break;
	case 6:
		printf("打印星期六");
		break;
	case 7:
		printf("打印星期天");
		break;
	}
}