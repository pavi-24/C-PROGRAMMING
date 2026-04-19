#include<stdio.h>
#define PI 3.14159
int main()
{
    float r,area;
    scanf("%f",&r);
    area=PI*r*r;
    printf("Area of Circle:%.2f",area);
    return 0;
}