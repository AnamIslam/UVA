#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,t,r=0;
    char a[105];

    scanf("%d", &n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(a);
        r=0;
        t = strlen(a);

        for(j=0;j<t;j++)
        {
            if(a[j]=='a' || a[j]=='d' || a[j]=='g' || a[j]=='j' || a[j]=='m' || a[j]=='p' || a[j]=='t' || a[j]=='w' || a[j]==' ')
            {
                r++;
            }

            else if(a[j]=='b' || a[j]=='e' || a[j]=='h' || a[j]=='k' || a[j]=='n' || a[j]=='q' || a[j]=='u' || a[j]=='x')
            {
                r=r+2;
            }

            else if(a[j]=='c' || a[j]=='f' || a[j]=='i' || a[j]=='l' || a[j]=='o' || a[j]=='r' || a[j]=='v' || a[j]=='y')
            {
                r=r+3;
            }
            else if(a[j]=='s' || a[j]=='z')
            {
                r=r+4;
            }
        }
        printf("Case #%d: %d\n", i+1, r);
    }
    return 0;
}
