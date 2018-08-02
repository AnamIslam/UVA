#include<stdio.h>

int main()
{
    int n,m;
    while(scanf("%d", &n)==1)
    {
        m= n%6;

        if(m==0)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }

    }
    return 0;
}
