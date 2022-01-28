#include <stdio.h>

int main()
{
    int n;
    char *strings[] = {"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d",&n);
    if (n < 1)
        return 1;
    
    if (n >= 1 && n <= 9)
        printf("%s",strings[n-1]);
    else
        printf("Greater than 9");
    
    return 0;
}