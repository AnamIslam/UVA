#include<stdio.h>
#include<math.h>

int main()
{
    int n,result,t,i,s;

    printf("PERFECTION OUTPUT\n");
    while(1)
    {
        scanf("%d", &n);
        if(n!=0)
        {
            result=0;
            t=n;
            s=sqrt(n);
            for(i=1;i<=s;i++)
            {
                if(n%i==0)
                {
                    if(i!=n/i)
                    {
                        result=result+i+n/i;
                    }
                    else
                    {
                        result=result+i;
                    }
                }
            }
            result=result-n;
            if(result==n)
            {
                printf("%5d  PERFECT\n",n);
            }

            else if(result>n)
            {
                printf("%5d  ABUNDANT\n",n);
            }

            else
            {
                printf("%5d  DEFICIENT\n",n);
            }
        }
        else
            break;

    }
    printf("END OF OUTPUT\n");

return 0;
}
