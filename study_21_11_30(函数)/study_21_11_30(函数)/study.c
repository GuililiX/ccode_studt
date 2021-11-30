#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}



//int main()
//{
//	int a = 5;
//	int b = 7;
//	int max = get_max(a, b);
//	printf("最大数为：%d\n", max);
//
//	return 0;
//}


//void exc(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}


//int main()
//{
//	int a = 5;
//	int b = 7;
//	exc(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


//int su(int x)
//{
//	int b = 0;
//	for (b = 2; b < x; b++)
//	{
//		if (x % b == 0)
//		{
//			return 0;
//		}
//		if (b == x)
//		{
//			return x;
//		}
//	}
//}


//int main()
//{
//	int a = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		if (su(a) != 0)
//		{
//			printf("%d ", su(a));
//		}
//	}
//	return 0;
//}


//int run(int x)
//{
//	if((x % 4 == 0 && x % 100 != 0) || x % 400 ==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}



//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (run(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}


int find(int a[], int x, int y)
{
	int right = y - 1;
	int left = 0;
	while (1)
	{
		int mid = (right + left) / 2;
	    if (mid == left || mid == right)
		{
		return -1;
		}
		if (a[mid] < x)
		{
			left = mid;
		}
		else if (a[mid] > x)
		{
			right = mid;
		}
		else if (a[mid] = x)
		{
			return mid;
		}

	}
}



int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 17;
	int sz = sizeof arr1 / sizeof arr1[0];
	int f = find(arr1, key, sz);
	if (-1 == f)
	{
		printf("找不到");
	}
	if (-1 != f)
	{
		printf("找到了：%d", f);
	}
	return 0;
}