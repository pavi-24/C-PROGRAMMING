#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b){
        printf("Smallest:%d",a);
    }
    else{
        printf("smallest:%d",b);
    }
    return 0;
}