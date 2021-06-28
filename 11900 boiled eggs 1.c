//wrong code//
#include<stdio.h>
int main()
{
    int n,i,t,j,p,q,m[100],k,sum,sum1,sum2;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&n,&p,&q);
        sum=0;sum1=0;sum2=0;
        for(j=1;j<=n;j++)
        {
            scanf("%d",&m[j]);
            sum=sum+m[j];
            if(j<=p){
                if(sum>q)
                    break;
                sum2=sum2+1;
            }
        }
        printf("Case %d: %d\n",i,sum2);
    }
    return 0;
}


