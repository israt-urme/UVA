#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,m,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            scanf("%d",&m);
            if(j==(n+1)/2)
                printf("Case %d: %d\n",i,m);
        }

    }
    return 0;
}
