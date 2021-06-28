#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,m,y;
    string a;
    cin>>n;
    while(n--)
    {
        if(cin>>a)
        {
            cin>>d>>m>>y;
        }
        if(y>m)
            m=y;
    }
    return 0;
}

