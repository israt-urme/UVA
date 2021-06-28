#include<bits/stdc++.h>
using namespace std;
long long int r(long long int x);
int main()
{
    long long int t,a,b,sum,sum1,sum2,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        sum=r(a);
        sum1=r(b);
        c=sum+sum1;
        cout<<r(c)<<endl;
    }
    return 0;
}
long long int r(long long int a)
{
    long long int sum=0;
    while(a!=0)
    {
        sum=sum*10+a%10;
        a=a/10;
    }
    return sum;
}
