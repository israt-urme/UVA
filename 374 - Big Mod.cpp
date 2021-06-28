#include<bits/stdc++.h>
using namespace std;
int bmod(long long b,long long p,long long m)
{
    if(p==0) return 1;
    if(p%2!=0)
    {
        int part1=b%m;
        long long part2=bmod(b,p-1,m);
        return (part1*part2)%m;
    }
    if(p%2==0)
    {
        long long half=bmod(b,p/2,m);
        return (half*half)%m;
    }
}
int main()
{
    long long b,p,m;
    while(cin>>b>>p>>m)
    {
        cout<<bmod(b,p,m)<<endl;
    }
    return 0;
}
