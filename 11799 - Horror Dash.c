#include<stdio.h>
int main()
{
    int t,i,a,n,j,max;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        max=0;
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a);
            if(a>max)
                max=a;
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}
