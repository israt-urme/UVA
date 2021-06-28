#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10];
    vector<string>v;
    string s;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=0;j<10;j++)
        {
            cin>>s>>a[j];
            v.push_back(s);
            if(a[j]>sum)
                sum=a[j];
        }
        printf("Case #%d:\n",i);
        for(int j=0;j<10;j++)
        {
            if(sum ==a[j])
            {
                cout<<v[j]<<endl;
            }
        }
    }
    return 0;
}

