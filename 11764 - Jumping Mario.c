#include<stdio.h>
int main()
{
    int t,i,n,a[50],s,s1,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        s=0;
        s1=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<n-1;j++)
        {
            if(a[j]<a[j+1])
                s=s+1;
            if(a[j]>a[j+1])
                s1=s1+1;

        }
        printf("Case %d: %d %d\n",i,s,s1);
    }
    return 0;
}
