#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[6];
    cin>>n;
    while(n--)
    {
        for(int i=0;i<5;i++)
            cin>>a[i];
        int b=(a[1]-'0')-(a[0]-'0');
        int c=(a[2]-'0')-(a[1]-'0');
        int d=(a[3]-'0')-(a[2]-'0');
        int e=(a[4]-'0')-(a[3]-'0');
        if(b==c && c==d && d==e && e==b)
            cout<<"Y\n";
        else
            cout<<"N\n";
    }
    return 0;
}

