#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 3 == 0)
//		{
//			printf("%d ", a);
//		}
//	}
//
//	return 0;
//}



int main()
{
	int a = 0;
	int b = 0;
	int tmp = 0;
	scanf("%d%d", &a, &b);
	int c = a * b;
	while (tmp = a % b)
	{
		a = b;
		b = tmp;
	}
	int min = c / b;
	printf("%d\n", min);
	return 0;
}