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
            sum1=sum1%11;
        }
        if(sum1==0)
            cout<<n<<" is a multiple of 11.\n";
        else
            cout<<n<<" is not a multiple of 11.\n";
    }
    return 0;
}

