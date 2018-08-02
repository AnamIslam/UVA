#include<stdio.h>
#include<math.h>

int main()
{
    double area,r,a,b,c,s,s1;

    while(scanf("%lf %lf %lf", &a, &b, &c)!= EOF)
    {

        if(a==0 || b==0 || c==0)
        {
            r=0.0;
        }

        else
        {
            s=(a+b+c)/2;

            s1= s*(s-a)*(s-b)*(s-c);

            area= sqrt(s1);

            r = 2*area/(a+b+c);
        }

        printf("The radius of the round table is: %.3lf\n", r);
    }

    return 0;
}
