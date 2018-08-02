#include<stdio.h>

int main()
{
    int t,x,y,nx,ny,i;

    while(scanf("%d", &t)==1)
    {
        if(t==0)
        {
            break;
        }

        scanf("%d %d", &x, &y);

        for(i=0;i<t;i++)
        {
            scanf("%d %d", &nx, &ny);
            if(nx==x || ny==y)
            {
                printf("divisa\n");
            }
            else if(nx>x)
            {
                if(ny>y)
                    printf("NE\n");

                else
                    printf("SE\n");
            }

            else
            {
                if(ny>y)
                    printf("NO\n");

                else
                    printf("SO\n");
            }
        }
    }
    return 0;
}
