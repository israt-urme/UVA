#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        int a[n+2],sum=0,m=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
            if(sum>m)
                m=sum;
            if(sum<0)
                sum=0;
        }
        if(m<=0)
            printf("Losing streak.\n");
        else
            printf("The maximum winning streak is %d.\n",m);
    }
}
