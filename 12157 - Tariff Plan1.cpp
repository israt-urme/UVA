#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,mj;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        int sum=0,sum1=0,r,r1;
        for(int j=0;j<n;j++)
        {
            cin>>mj;
            int mult=mj/30;
            r=mj-((mult*30)-1);
            if(r>0)
                mult++;
            sum=sum+mult*10;
            int mult1=mj/60;
            r1=mj-((mult1*60)-1);
            if(r1>0)
                mult1++;
            sum1=sum1+mult1*15;
        }
        if(sum<sum1)
            printf("Case %d: Mile %d\n",i,sum);
        else if(sum>sum1)
            printf("Case %d: Juice %d\n",i,sum1);
        else if(sum==sum1)
            printf("Case %d: Mile Juice %d\n",i,sum);
    }
    return 0;
}
