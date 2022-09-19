#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int coding = 0;
	printf("成为程序员\n");
	printf("你要好好学习编程吗?（1/0)>:");
	scanf_s("%d", &coding);//1/0
	if (coding == 1)
		printf("会，你会有好office\n");
	else
		printf("不会，回家搬砖\n");

	return 0;
}