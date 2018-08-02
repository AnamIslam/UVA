#include<stdio.h>

int main()
{
    char a[30];
    while(scanf("%[^\n]",&a)==1)
    {
        printf("%s\n",a);
    }
    return 0;
}
