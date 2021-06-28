#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int l=s.length(),i,j,sum=0;
        if(l==1 && (s[0]-'0')==0)
            break;
        j=l;
        for(i=0;i<l;i++)
        {
            sum=sum+((s[i]-'0')*((pow(2,j))-1));
            j--;
        }
        cout<<sum<<endl;
    }
    return 0;
}
