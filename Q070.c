#include<stdio.h>
int main()
{
    float basic,pf,ins;
    scanf("%f",&basic);
    pf=0.08*basic;
    ins=0.05*basic;
    printf("Net salary:%.2f",basic-(pf+ins));
    return 0;
}