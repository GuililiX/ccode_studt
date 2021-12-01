#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//void print(int a)
//{
//	if (a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d ", a % 10);
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}



//int str(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + str(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}


//int main()
//{
//	char arr[] = "hello";
//	printf("%d\n", str(arr));
//	return 0;
//}



int fac(int a)
{
	if (a > 1)
	{
		return a * fac(a - 1);
	}
	else
	{
		return 1;
	}
}


int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d\n", fac(a));
	return 0;
}


int fib(int a)
{
	if (a <= 2)
	{
		return 1;
	}
	else
	return fib(a - 1) + fib(a - 2);
}


int main()
{
	int a = 0;
	scanf("%d", &a);
	int fb = fib(a);
	printf("%d\n", fb);
	return 0;
}