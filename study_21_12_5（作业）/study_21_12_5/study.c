#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int i = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 10 == 9)
//		{
//			i++;
//		}
//		if (a / 10 == 9)
//		{
//			i++;
//		}
//	}
//	printf("%d\n", i);
//
//	return 0;
//}



//int ADD(int a)
//{
//	if (a != 1)
//	{
//		if (a % 2 == 0)
//		{
//			return (1 / ADD(a - 1)) - (1 / a);
//		}
//		else
//		{
//			return (1/a) + (1/ADD(a - 1));
//		}
//	}
//	else
//	{
//		return a;
//	}
//}



//int main()
//{
//	int a = 100;
//	printf("%d\n", ADD(a));
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	double i = 0.0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 2 == 0)
//		{
//			i -= 1.0 / a;
//		}
//		else
//		{
//			i += 1.0 / a;
//		}
//	}
//	printf("%lf\n", i);
//	return 0;
//}



//int main()
//{
//	int arr[] = {8, 16, 4, 24, 20, 68, 98, 50, 59, 42};
//	int a = 0;
//	int max = arr[0];
//	for (a = 1; a <= 10; a++)
//	{
//		if (max < arr[a])
//		{
//			max = arr[a];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}



int main()
{
	int a = 0;
	int b = 0;
	for (a = 1; a <= 9; a++)
	{
		for (b = 1; b <= a; b++)
		{
				printf("%d*%d=%d\t", a, b, a * b);
		}
		printf("\n");
	}

	return 0;
}