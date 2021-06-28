#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
    int a[5],c=0;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        if(a[i]==t)
            c++;
    }
    cout<<c<<endl;
    }
    return 0;
}
