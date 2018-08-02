#include<stdio.h>

int main()
{
    int r,c,b,i,j;
    long int  count;
    {
        while(1)
        {
            scanf("%d %d %d", &r, &c, &b);
            count = 0;

            if(r==b && b==c && c==0)
            {
                break;
            }
            else
            {
                if(b==1)
                {
                    for(i=8;i<=r;i++)
                    {
                        for(j=8;j<=c;j++)
                        {
                            if(i%2==j%2)
                            count ++;
                        }
                    }

                    printf("%ld\n", count);
                }

                else if(b==0)
                {
                    for(i=8;i<=r;i++)
                    {
                        for(j=8;j<=c;j++)
                        {
                            if(i%2!=j%2)
                            count ++;
                        }
                    }

                    printf("%ld\n", count);
                }

            }
        }
    }

    return 0;
}
