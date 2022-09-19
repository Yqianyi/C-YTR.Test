#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int num1 = 520;
	int num2 = 1314;
	int sum = 0; 

	sum = Add(num1, num2);
	printf("sum=%d\n", sum);

	return 0;
}