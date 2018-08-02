#include<stdio.h>

int main()
{
    int a[1000];
    int n,count,i,j,temp;

    while(scanf("%d", &n)!= EOF)
    {
        count=0;

        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }

        for(i=0;i<n-1;i++)
        {
            for(j=i;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    count++;
                }

            }
        }
        printf("Minimum exchange operations : %d\n", count);
    }

    return 0;
}
