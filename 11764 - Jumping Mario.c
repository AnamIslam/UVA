#include<stdio.h>

int main()
{
    int t,n,hj,lj,i,j,last,w;

    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        scanf("%d", &last);
        lj=0;
        hj=0;
        for(j=0;j<n-1;j++)
        {
            scanf("%d", &w);

            if(w>last)
            {
                hj++;
            }
            else if(w<last)
            {
                lj++;
            }
            last=w;
        }

        printf("Case %d: %d %d\n", i+1, hj, lj);
    }

    return 0;
}
