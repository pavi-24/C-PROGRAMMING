#include<stdio.h>
int main()
{
    float s;
    scanf("%f",&s);
    printf("Surface Area of Cube:%.2f\n",6*s*s);
    printf("Volume of cube:%.2f\n",s*s*s);
    printf("Perimeter of cube:%.2f",12*s);
    return 0;
}