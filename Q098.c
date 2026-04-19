#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')){
        printf("%c is alphabet",ch);
    }
    else{
        printf("%c is not alphabet",ch);
    }
    return 0;
}