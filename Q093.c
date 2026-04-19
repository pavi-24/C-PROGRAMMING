#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0 && n<=9){
        printf("%d is single digit number",n);
    }
    else if(n>=10 && n<=99){
        printf("%d is the two digit number",n);
    }
    else if(n>=100 && n<=999){
        printf("%d is the three digit number",n);
    }
    else{
        printf("%d is more the three digit number",n);
    }
    return 0;
}