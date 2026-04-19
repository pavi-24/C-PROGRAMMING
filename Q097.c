#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("%c is uppercase letter",ch);
    }
    else if(ch>='a' && ch<='z'){
        printf("%c is lowercase letter",ch);
    }
    else if(ch>='0' && ch<='9'){
        printf("%c is digit",ch);
    }
    else{
        printf("%c is special symbol",ch);
    }
    return 0;
}