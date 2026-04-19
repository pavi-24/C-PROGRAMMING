#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int last=n%10;
    if(last%2==0){
        printf("%d is even",last);
    }
    else{
        printf("%d is odd",last);
    }
    return 0;
}