#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a;
    while(cin>>n>>a)
    {
        long long sum=0,sum1=1,i;
        for(i=1;i<=n;i++)
        {
            sum1=sum1*a;
            sum=sum+i*sum1;
        }
        cout<<sum<<endl;
    }
    return 0;
}


