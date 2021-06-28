#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        long long sum=0,b;
        while(n!=0)
        {
            x=n%10;
            sum=sum+(x*x);
            n=n/10;
        }
        b=sum;
    }
}
