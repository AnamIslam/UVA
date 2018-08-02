#include<stdio.h>

int main()
{
    int a,b,n,i,j,sum;

    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        sum=0;
        scanf("%d",&a);
        scanf("%d",&b);

        for(j=a;j<=b;j++)
        {
            if(j%2!=0)
            {
                sum=sum+j;
            }
        }
        printf("Case %d: %d\n",i+1,sum);
    }

    return 0;
}
