#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,j,l3,i;
    string s,s1,a;
    cin>>n;
    while(n--)
    {
        cin>>s>>s1;
        int l=s.length();
        int l1=s1.length();
        if(l>l1)
            l3=l;
        else
            l3=l1;
        sum=0;
        j=0;
        for(i=l3-1;i>=0;i--)
        {
            sum=s[i]-'0'+s1[i]-'0';
            a[j]=sum%10+'0';
            sum=sum/10;
            cout<<a[j];
            j++;
        }
    }
    return 0;
}
