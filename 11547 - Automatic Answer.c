#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,r,r1,r2;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        r=((((((n*567)/9)+7492)*235)/47)-498);
        r1=r/10;
        r2=r1%10;
        if(r2<0)
            printf("%d\n",-r2);
        else
            printf("%d\n",r2);
    }
    return 0;
}
