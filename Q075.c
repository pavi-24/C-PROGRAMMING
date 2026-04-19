#include<stdio.h>
int main()
{
    int amount;
    scanf("%d",&amount);
    int a=amount/500;
    printf("500 notes:%d\n",a);
    int b=amount%500;
    int c=b/200;
    printf("200 notes:%d\n",c);
    int d=amount%200;
    int e=d/100;
    printf("100 notes:%d",e);
    return 0;
}