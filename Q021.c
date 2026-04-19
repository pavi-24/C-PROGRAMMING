#include<stdio.h>
int main()
{
    int roll;
    char str[20];
    scanf("%d",&roll);
    scanf("%[^\n]",str);
    printf("Roll No: %d, Name: %s",roll,str);
    return 0;
}