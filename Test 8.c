#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int coding = 0;
	printf("��Ϊ����Ա\n");
	printf("��Ҫ�ú�ѧϰ�����?��1/0)>:");
	scanf_s("%d", &coding);//1/0
	if (coding == 1)
		printf("�ᣬ����к�office\n");
	else
		printf("���ᣬ�ؼҰ�ש\n");

	return 0;
}