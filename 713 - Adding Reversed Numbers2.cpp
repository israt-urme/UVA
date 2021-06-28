#include<bits/stdc++.h>
using namespace std;

#define m 210

int main()
{
    int n,i,j;
    char s[m],s1[m];
    int sum[m];
    cin>>n;
    while(n--)
    {
        cin>>s>>s1;
        int l=strlen(s);
        int l1=strlen(s1);
        if(l<l1)
        {
            for(i=l; i<l1; i++)
                s[i]='0';
        }
        else if(l>l1)
        {
            for(i=l1; i<l; i++)
                s1[i]='0';
        }
        int l3=max(l,l1);
        int carry=0;
        for(i=0; i<l3; i++)
        {
            sum[i]=carry+s[i]-'0'+s1[i]-'0';
            if(sum[i]>9)
            {
                carry=sum[i]/10;
                sum[i]=sum[i]%10;
            }
            else
                carry=0;
        }
        int k=0;
        while(sum[k]==0)
            k++;
        for(i=k; i<l3; i++)
        {
            cout<<sum[i];
        }
        if(carry>0)
        {
            sum[l3]=carry;
            cout<<sum[l3]<<endl;
        }
        else
            cout<<endl;

    }
    return 0;
}
