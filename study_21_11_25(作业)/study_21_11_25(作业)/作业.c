#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int a = 0, b = 0, c = 0;
//	int a1 = 0;
//	int b1 = 0;
//	int c1 = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b&&b > c)
//	{
//		a1 = a;
//		b1 = b;
//		c1 = c;
//	}
//	else if (a > c&&c > b)
//	{
//		a1 = a;
//		b1 = c;
//		c1 = b;
//	}
//	else if (b > a&&a > c)
//	{
//		a1 = b;
//		b1 = a;
//		c1 = c;
//	}
//	else if (b > c&&c > a)
//	{	
//		a1 = b;
//		b1 = c;
//		c1 = a;
//	}
//	else if (c > a&&a > b)
//	{
//		a1 = c;
//		b1 = a;
//		c1 = b;
//	}
//	else
//	{
//		a1 = c;
//		b1 = b;
//		c1 = a;
//	}
//	printf("%d %d %d\n", a1, b1, c1);
//	return 0;
//}



int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);

	return 0;
}