#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    char arr1[] = "ytr";
    char arr2[] = { 'y', 't', 'r' };
    char arr3[] = { 'y', 't', 'r', '\0' };
    printf("%s\n", arr1);
    printf("%s\n", arr2);
    printf("%s\n", arr3);
    return 0;
}
