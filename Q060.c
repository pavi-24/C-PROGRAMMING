#include<stdio.h>
#define PI 3.14159
int main()
{
    float r,h;
    scanf("%f%f",&r,&h);
    printf("Surface area of cylinder:%.2f\n",2*PI*r*(r+h));
    printf("volume of cylinder:%.2f",PI*r*r*h);
    return 0;
}