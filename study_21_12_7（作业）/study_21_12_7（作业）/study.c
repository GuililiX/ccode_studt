#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//void math(int a)
//{
//	int i = 0;
//	for (i = 1; i <= a; i++)
//	{
//		int m = 0;
//		for (m = 1; m <= i; m++)
//		{
//			printf("%d*%d=%d\t", i, m, i * m);
//		}
//		printf("\n");
//	}
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	math(a);
//	return 0;
//}


//int my_strlen(char* string)
//{
//	int a = 0;
//	while (1)
//	{
//		if (*string != '\0')
//		{
//			a++;
//			string++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	return a;
//}

//void reverse_string(char* string)
//{
//	int left = 0;
//	int right = my_strlen(string) - 1;
//	while (1)
//	{
//		if (left < right)
//		{
//			char tmp = string[left];
//			string[left] = string[right];
//			string[right] = tmp;
//			left++;
//			right--;
//		}
//		else
//		{
//			break;
//		}
//	}
//}

//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int DigitSum(int a)
//{
//	if (a <= 9)
//	{
//		return a;
//	}
//	else
//	{
//		return (a % 10) + (DigitSum(a / 10));
//	}
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = DigitSum(a);
//	printf("%d", i);
//	return 0;
//}


double math(int a, int b)
{
	if (b > 0)
	{
		return a * math(a, b - 1);
	}
	else if(b == 0)
	{
		return 1.0;
	}
	else if (b < 0)
	{
		return 1.0 / (math(a, -b));
	}
}


int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double i = math(n, k);
	printf("%lf\n", i);
	return 0;
}