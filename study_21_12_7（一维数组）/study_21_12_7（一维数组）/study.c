#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>





//int main()
//{
//	char ch[10] = "hello";
//
//	return 0;
//}

void sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int m = 0;
		for (m = 0; m < sz - 1 - i; m++)
		{
			if (arr[m] > arr[m + 1])
			{
				int tmp = arr[m];
				arr[m] = arr[m + 1];
				arr[m + 1] = tmp;
			}
		}
	}
	return 0;
}


int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 10, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr, sz);
	return 0;
}


int main()
{
	int arr[] = {1,2,3,4};
}


int main()
{
	int arr[3][4] = { 1,2,3,4 };
	int arr[3][4] = { {1,2},{4,5} };
	int arr[][4] = { {2,3},{4,5} };//二维数组如果有初始化，行可以省略，列不能省略
	arr[1][2]
}