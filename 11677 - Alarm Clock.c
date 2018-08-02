#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,t1,t2,d;
    while(1)
        {
            scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

            t1=h1*60+m1;
            t2=h2*60+m2;

            if(t1==0 && t2==0)
            {
                break;
            }
            else
            {
                if(t1>t2)
                {
                    d=t2+24*60-t1;
                }
                else
                {
                    d=t2-t1;
                }

                printf("%d\n", d);
            }

        }
        return 0;

}

