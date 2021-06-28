#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a==0 || b==0)
        return 0;
    if(a==b) return a;
    if(a>b)
        return gcd(a-b,b);
    else
        return gcd(a,b-a);
}

int main()
{
    int g,i,j,n;
    while(cin>>n)
    {
        g=0;
        if(n==0) break;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
                g=g+gcd(i,j);
        }
        cout<<g<<endl;
    }
    return 0;
}
