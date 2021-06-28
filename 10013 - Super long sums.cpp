#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    scanf("%d",&n);
    for(int k=1;k<=n;k++)
    {
        scanf("%d",&m);
        string a(1000000,' '), b(1000000,' ');
        string c(m,' ');
        int i,sum=0,carry=0,j=0;
        for(i=0;i<m;i++)
        {
            cin>>a[i]>>b[i];
        }
        for(i=m-1;i>=0;i--)
        {
            sum=(a[i]-'0'+b[i]-'0')+carry;

            c[i]=(sum%10)+'0';
            carry=sum/10;
            sum=0;
        }
        if(k<n)
            cout<<c<<endl<<endl;
        else
            cout<<c<<endl;
    }
    return 0;
}
