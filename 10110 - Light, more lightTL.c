#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,check,i;

    while(1)
    {
        scanf("%lld", &n);
        check=0;

        if(n!=0)
        {
            for(i=1;i<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                    check++;
                }
            }
            if(check%2==0)
                printf("no\n");
            else
                printf("yes\n");
        }

        else
        {
            break;
        }
    }

    return 0;
}
