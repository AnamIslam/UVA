#include<stdio.h>
int main()
{
    int a,b,n1,n2,temp;
    while(scanf("%d %d", &a, &b)==2)
    {
        if(a==-1 && b==-1)
        {
            break;
        }
        if(b>a)
        {
            temp=a;
            a=b;
            b=temp;
        }
        n1=a-b;
        n2=b-a+100;
        if(n1>n2)
        {
            printf("%d\n",n2);
        }
        else
        {
            printf("%d\n",n1);
        }
    }
    return 0;
}
