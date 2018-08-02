#include<stdio.h>

int main()
{
    int a,b,c,l,d,i,f,r,count;

    while(1)
    {
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &l);

        if(a==0 && b==0 && c==0 && l==0 && d==0)
        {
            break;
        }

        count=0;

        for(i=0;i<=l;i++)
        {
            f=a*i*i+b*i+c;
            r=f/d;

            if(f==r*d)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
