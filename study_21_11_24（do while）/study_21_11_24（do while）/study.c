#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>



//int main()
//{
//	int a = 1;
//	do 
//	{
//		printf("%d ", a);
//		a++;
//	} while (a <= 10);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = 0;
//	int n = 1;
//	for (b = 1; b <= a; b++)
//	{
//		n *= b;
//	}
//	printf("%d", n);
//	return 0;
//}



//int main()
//{
//	int b = 0;
//	int n = 1;
//	int c = 0;
//	int a = 0;
//	printf("������Ҫ1-n�Ľ׳˺͵�n=");
//	scanf("%d", &a);
//	for (b = 1; b <= a; b++)
//	{
//		n *= b;
//		c += n;
//	}
//	printf("%d", c);
//	return 0;
//}



//int main()
//    {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 6;
//	scanf("%d", &i);
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < i)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > i)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û��");
//	}
//		return 0;
//	}//��������Ѱ�����������



int main()
{
	char arr1[] = "hello world";
	char arr2[] = "***********";
	int left = 0;
	int right = sizeof(arr1)/sizeof(arr1[0]) - 2;  //strlen(arr1) - 1
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}//�����ο�ʼ������ӡ����