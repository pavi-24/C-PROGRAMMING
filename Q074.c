#include<stdio.h>
int main()
{
    int n,price;
    scanf("%d%d",&n,&price);
    printf("Total price : %d",(n/5)*3*price + (n%5)*price);
    return 0;
}