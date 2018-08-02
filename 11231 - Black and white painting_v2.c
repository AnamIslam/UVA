#include<stdio.h>

int main()
{
    int r,c,n,i;
    long count;
    while(1)
    {
        scanf("%d %d %d", &r, &c, &n);
        count =0;

        if(r+c+n==0)
        {
            break;
        }

        else
        {
            if(n==1)
            {
                for(i=8;i<=r;i++)
                {
                        count=count+((c-8)/2)+((i+1)%2);
                }


            }
            else if(n==0)
            {
                for(i=8;i<=r;i++)
                {
                        count=count+((c-8)/2)+(i%2);
                }
            }

            printf("%ld\n", count);
        }
    }

    return 0;
}
