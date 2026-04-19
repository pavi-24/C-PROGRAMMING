#include<stdio.h>
int main()
{
    int n,price;
    scanf("%d%d",&n,&price);
    printf("total price:%d",(n-(n/3))*price);
    return 0;
}