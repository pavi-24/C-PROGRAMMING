#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=100 && n<=999){
        printf("%d is 3 digit number",n);
    }
    else{
        printf("%d is not 3 digit number",n);
    }
    return 0;
}