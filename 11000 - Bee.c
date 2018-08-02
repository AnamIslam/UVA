#include<stdio.h>

int main()
{
    long long int y,n1,n2,i,m,t,te;
    while(1)
    {
        scanf("%lld", &y);

        if(y!=-1)
        {
            n1=0;
            n2=1;
            m=0;
            t=1;
            for(i=0;i<y;i++)
            {
                te=n2;
                n2=n2+n1;
                n1=te;

                m=m+n1;
                t=m+n2;
            }
            printf("%lld %lld\n", m, t);
        }

        else
            break;
    }
    return 0;
}
