#include<stdio.h>

int main()
{
    long number,testCase,i,temp,temp1,count,d,d1,testNumber;

    scanf("%ld", &testCase);

    for(i=0;i<testCase;i++)
    {
        scanf("%ld", &number);
        temp=number;
        count=0;

        while(temp!=0)
        {
            temp=temp/10;
            count++;
        }
       // printf("%ld",count);
        temp1=number;
        while(temp!=0)
        {
            d=temp%10;
            d1=1;
            testNumber=0;
            for(i=0;i<count;i++)
            {
                d1=d1*d;
            }
            testNumber=testNumber+d1;
        }
        if(number==testNumber)
            printf("Aremstrong number\n");
        else
            printf("Not Armstrong number\n");
    }

    return 0;
}
