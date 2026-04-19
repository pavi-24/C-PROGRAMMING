#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int last=n%10;
    if(last%3==0){
        printf("last digit of %d is divisible by 3",n);
    }
    else{
        printf("last digit of %d is not divisible by 3",n);
    }
    return 0;
}