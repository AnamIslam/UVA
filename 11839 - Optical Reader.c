#include<stdio.h>

int main()
{
    int t,n,i,j,count,result;

    while(1)
    {
        scanf("%d", &t);

        if(t!=0)
        {
            for(j=0;j<t;j++)
            {
                count=0;
                for(i=65;i<70;i++)
                {
                    scanf("%d", &n);

                    if(n<=127)
                    {
                        result=i;
                        count++;
                    }
                }

                if(count==1)
                {
                    printf("%c\n", result);
                }

                else
                {
                    printf("*\n");
                }

            }
        }

        else
            break;
    }

    return 0;
}
