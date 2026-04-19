#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<c && a<b){
        printf("Smallest:%d",a);
    }
    else if(b<c && b<a){
        printf("Smallest:%d",b);
    }
    else{
        printf("smallest:%d",c);
    }
    return 0;
}