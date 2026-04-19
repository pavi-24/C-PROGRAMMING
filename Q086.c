#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int first=n/100;
    if(first%2==0){
        printf("%d is even",first);
    }
    else{
        printf("%d is odd",first);
    }
    return 0;
}