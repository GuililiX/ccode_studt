#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

double math(double a)
{
	int m = 0;
	for (m = 0; m < 30; m++)
	{
		a = a * 1.0005;
	}
	return a;
}

int main()
{
	double a = 787.39;
	double i = math(a);
	double m = i - a;
	printf("%lf\n", m);
	return 0;
}