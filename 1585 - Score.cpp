#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,l,i,c,sum;
    cin>>n;
    while(n--)
    {
        cin>>s;
        c=0,sum=0;
        l=s.length();
        for(i=0;i<l;i++)
        {
            if(s[i]=='O'){
                c++;
                sum=sum+c;
            }
            if(s[i]=='X')
            {
                c=0;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
