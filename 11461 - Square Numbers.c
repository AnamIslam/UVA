#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,count,s,i,j;
    while(1)
    {
        scanf("%d %d", &a, &b);

        if(a==0 && b==0)
        {
            break;
        }

        else
        {
            count =0;
            for(i=a;i<=b;i++)
            {
                j=i;
                s=sqrt(i);

                if(s*s==j)
                {
                    count++;
                }
            }

            printf("%d\n",count);
        }
    }

    return 0;
}
