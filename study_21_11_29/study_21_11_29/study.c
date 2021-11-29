#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//int main()
//{
//	int a = 0;
//	int count = 0;
//	for (a = 1000; a <= 2000; a++)
//	{
//		if (a % 4 == 0)
//		{
//			if (a % 100 != 0)
//			{
//				printf("%d ", a);
//				count++;
//			}
//			else if (a % 400 == 0)
//			{
//				printf("%d ", a);
//				count++;
//			}
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int count = 0;
//	for (a = 1000; a <= 2000; a++)
//	{
//		if (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0))
//		{
//			printf("%d ", a);
//			count++;
//		}
//
//	}
//	printf("\n%d\n", count);
//	return 0;
//}


int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int m = 0;
		int flag = 1;
		for (m = 2; m <= sqrt(i); m++)
		{
			if (i % m == 0)
			{
				flag = 0;
				break;
			}

		}
		if (flag == 1)
		{
			printf("%d ", i);
		}
	}

	return 0;
}