#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int pro=a*b;
    if(pro>0){
        printf("%d is positive",pro);
    }
    else{
        printf("%d is Negative",pro);
    }
    return 0;
}