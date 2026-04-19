#include<stdio.h>
int main()
{
    char str[60];
    scanf("%[^\n]",str);
    printf("\"%s\"",str);
    return 0;
}