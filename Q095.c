#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if((int)ch%2==0){
        printf("The ASCII value of %c=%d is even",ch,ch);
    }
    else{
        printf("The ASCII value of %c=%d is odd",ch,ch);
    }
    return 0;
}