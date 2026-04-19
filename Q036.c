#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int last=n/10;
    int l=last%10;
    printf("%d",l);
    return 0;
}