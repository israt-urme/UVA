#include<stdio.h>
int main()
{
    int n,i,t,j,p,q,m[100],k,sum,sum1,sum2;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&n,&p,&q);
        sum=0;sum1=0;
        for(j=1;j<=n;j++)
        {
            scanf("%d",&m[j]);
        }
        for(j=1;j<=n && j<=p;j++)
        {
            sum=sum+m[j];
            if(sum>q)
                break;
            sum1=sum1+1;
        }
        printf("Case %d: %d\n",i,sum1);
    }
    return 0;
}


