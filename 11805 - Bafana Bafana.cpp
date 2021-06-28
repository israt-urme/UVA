#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,p,z;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>k>>p;
        z=(k+p)%n;
        if(z==0)
            cout<<"Case "<<i<<": "<<n<<endl;
        else
            cout<<"Case "<<i<<": "<<z<<endl;
    }
    return 0;
}

