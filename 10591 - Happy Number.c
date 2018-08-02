#include<stdio.h>

int main()
{
    int n,t,t1,t2,a,s,i,test;

    scanf("%d", &test);

    for(i=1;i<=test;i++)
    {
        scanf("%d", &n);

        t=n;

        while(t>1)
        {
            s= 0;
            t2=t;
            while(t2!=0)
            {
                a=t%10;
                s=s+a*a;
                //-------------------------
                printf("%d->",s);
            }
            t=s;
            printf("____%d", t);
        }

        if(t==1)
        {
            printf("Case #%d: %d is a Happy number.\n", i, n);
        }

        else
        {
            printf("Case #%d: %d is a Unhappy number.\n", i, n);
        }
    }

    return 0;
}
