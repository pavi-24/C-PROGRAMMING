#include<stdio.h>
int main()
{
    float l,b,h;
    scanf("%f%f%f",&l,&b,&h);
    printf("surface area of cuboid:%.2f\n",2*((l*b)+(b*h)+(l*h)));
    printf("Volume of cubiod:%.2f",l*b*h);
    return 0;
}