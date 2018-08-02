#include<stdio.h>

int main()
{
    long long int n,m,a,b,res,count,i,j;

    while((scanf("%lld %lld", &m, &n))==2)
    {
        if(m<=0 || n<=0)
        {
            printf("Invalid input\n");
        }
        else

        {
            if(m>=n)
            {
                a=n;
                b=m;
            }
            else
            {
                a=m;
                b=n;
            }
            res = 0;
            for(i=a;i<=b;i++)
            {
                j=i;
                count = 0;
                while(j!=1)
                {

                    if(j%2==0)
                    {
                        j=j/2;
                        count++;
                    }

                    else
                    {
                        j=3*j+1;
                        count++;
                    }
                }
                count++;

                if(count>res)
                {
                    res=count;
                }
        }

        printf("%lld %lld %lld\n", m, n, res);
        }
    }

    return 0;
}
