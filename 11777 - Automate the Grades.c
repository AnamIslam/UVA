#include<stdio.h>

int main()
{
    int testCase,i,fTerm,sTerm,Final,attendence,ct1,ct2,ct3,lct,totalNumber;

    while((scanf("%d", &testCase))==1)
    {
        for(i=1;i<=testCase;i++)
        {

            scanf("%d %d %d %d %d %d %d", &fTerm, &sTerm, &Final, &attendence, &ct1, &ct2, &ct3 );
                {
                    lct=(ct1<ct2)?ct1:ct2;
                    lct=(ct3<lct)?ct3:lct;

                    totalNumber=fTerm+sTerm+Final+attendence+(ct1+ct2+ct3-lct)/2;
                   // printf("totalnumber %d\n",totalNumber);

                    if(totalNumber>=90)
                        {
                            printf("Case %d: A\n", i);
                        }
                    else if(totalNumber>=80&&totalNumber<=90)
                        {
                            printf("Case %d: B\n", i);
                        }
                    else if(totalNumber>=70&&totalNumber<=80)
                        {
                            printf("Case %d: C\n", i);
                        }
                    else if(totalNumber>=60&&totalNumber<=70)
                        {
                            printf("Case %d: D\n", i);
                        }
                    else if(totalNumber<=60)
                        {
                            printf("Case %d: F\n", i);
                        }
            }
        }
    }

    return 0;
}
