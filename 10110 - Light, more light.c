#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,check,i;

    while(1)
    {
        scanf("%lld", &n);

        if(n!=0)
        {
            check=sqrt(n);
            if(check*check==n)
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }

        else
        {
            break;
        }
    }

    return 0;
}
