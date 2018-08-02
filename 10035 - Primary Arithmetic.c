#include<stdio.h>

int main()
{
    long long int a,b,t,r;

    while(1)
    {
        scanf("%lld %lld", &a, &b);
        r=0;
        t=0;

        if(a!=0 || b!=0)
        {
            while(a>0 || b>0)
            {
                t=(a%10)+(b%10)+t;
                a=a/10;
                b=b/10;


                if(t>9)
                {
                    r++;
                    t=1;
                }
                else
                {
                    t=0;
                }
            }
            if(r>1)
                printf("%lld carry operations.\n", r);

             else if(r==1)
                printf("%lld carry operation.\n", r);

             else
                printf("No carry operation.\n");
        }

        else
            break;
    }

    return 0;
}
