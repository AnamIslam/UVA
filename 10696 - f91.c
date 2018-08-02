#include<stdio.h>

int main()
{
    int a;
    while(1)
    {
        scanf("%d", &a);

        if(a!=0)
        {
            if(a<=100)
            {
                printf("f91(%d) = 91\n", a);
            }
            else
                printf("f91(%d) = %d\n", a, a-10);
        }
        else
        {
            break;
        }
    }

    return 0;
}
