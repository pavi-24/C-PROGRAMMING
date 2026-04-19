#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=a+b;
    if(sum%2==0){
        printf("%d is even",sum);
    }
    else{
        printf("%d is odd",sum);
    }
    return 0;
}