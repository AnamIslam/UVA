#include<stdio.h>

int main()
{
    int a[50];
    int ave,result,n,i,s,count=1;

    while(1)
    {
        scanf("%d", &n);

        if(n!=0)
        {
            result=0;
            s=0;

            for(i=0;i<n;i++)
            {
                scanf("%d", &a[i]);
                s=s+a[i];
            }
            ave=s/n;

            for(i=0;i<n;i++)
            {
                if(ave<a[i])
                {
                    result=result+(a[i]-ave);
                }
            }
            printf("Set #%d\nThe minimum number of moves is %d.\n\n", count++,result);
        }

        else
        {
            break;
        }
    }

    return 0;
}
