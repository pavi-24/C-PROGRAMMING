#include<stdio.h>
int main()
{
    int kids,candi;
    scanf("%d%d",&kids,&candi);
    printf("Each kids get %d candies\n",candi/kids);
    printf("remain candies : %d",candi%kids);
    return 0;
}