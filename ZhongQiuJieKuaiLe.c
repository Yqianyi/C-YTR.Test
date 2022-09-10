#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main()
{

    int i, j;
    int x = 0;
    int y = 7;
    int velocity_x = 1;
    int velocity_y = 1;
    int left = 0;
    int right = 100;
    int top = 0;
    int bottom = 28;

    //int height = 30;
    //int velocity = 1;

    while (1)
    {
        x = x + velocity_x;
        y = y + velocity_y;

        system("cls");

        for (i = 0; i < x; i++)
            printf("\n");
        for (j = 0; j < y; j++)
            printf(" ");
        printf("中秋节快乐！");
        printf("中秋节快乐！\n");
        printf("中秋节快乐！");
        printf("中秋节快乐！");
        printf("\n");
        Sleep(30);

        if ((x == top) || (x == bottom))
            velocity_x = -velocity_x;
        if ((y == left) || (y == right))
            velocity_y = -velocity_y;
    }

    return 0;
}