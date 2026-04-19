#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='0' && ch<='9'){
        printf("%c is digit",ch);
    }
    else{
        printf("%c is not digit",ch);
    }
    return 0;
}