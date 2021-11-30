#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int add(int a, int b)
//返回值类型  函数名  （函数参数）
{
	int c = a + b; //语句项
	return c;
}

int main()
{
	int x = 10;
	int y = 20;
	int z = add(x, y);
	printf("%d ", z);
	return 0;
}