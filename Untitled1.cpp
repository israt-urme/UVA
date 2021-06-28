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
            int mult=mj/29;
            if(mult==0)
                mult++;
            else
            {
                r=mj-(mult*29);
            if(r>0)
                mult++;
            }
            sum=sum+mult*10;
            int mult1=mj/59;
            if(mult1==0)
                mult1++;
            else{
                r1=mj-(mult1*59);
            if(r1>0)
                mult1++;}
            sum1=sum1+mult1*15;
        }
        if(sum<sum1)
            printf("Case %d: Mile %d\n",i,sum);
        if(sum>sum1)
            printf("Case %d: Juice %d\n",i,sum1);
        else if(sum==sum1)
            printf("Case %d: Mile Juice %d\n",i,sum);
    }
    return 0;
}
