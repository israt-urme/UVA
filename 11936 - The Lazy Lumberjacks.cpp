#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long a,b,c,m;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if(b+c>a && a+b>c && c+a>b)
                cout<<"OK\n";
        else
            cout<<"Wrong!!\n";
    }
    return 0;
}
