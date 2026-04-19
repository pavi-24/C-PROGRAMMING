#include<stdio.h>
int main()
{
    float km;
    scanf("%f",&km);
    printf("%.2f km = %.2f meters",km,km*1000);
    return 0;
}