#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    while(cin>>n)
    {
        int l=n.length(),sum1=0;
        if(n[0]=='0' && l==1) break;
        for(int i=0;i<l;i++)
        {
            sum1=sum1*10+(n[i]-'0');
            sum1=sum1%17;
        }
        if(sum1==0)
            cout<<"1\n";
        else
            cout<<"0\n";
    }
    return 0;
}
