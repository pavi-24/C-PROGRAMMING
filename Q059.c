#include<stdio.h>
#define PI 3.14159
int main()
{
    float r;
    scanf("%f",&r);
    printf("Surface area of sphere:%.2f\n",4*PI*r*r);
    printf("Volume of sphere:%.2f",(4.0/3.0)*PI*r*r*r);
    return 0; 
}