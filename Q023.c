#include<stdio.h>
int main()
{
    char blood[15];
    scanf("%[^\n]",blood);
    printf("Blood Group:%s",blood);
    return 0;
}