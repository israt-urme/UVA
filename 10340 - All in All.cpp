#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    int flag;
    while(cin>>s>>t)
    {
        int l=s.length();
        int l1=t.length();
        flag=0;
        if(l1>=l)
        {
            for(int i=0;i<l1;i++)
            {
                int c=0;
                flag=0;
                int j=0;
                if(t[i]==s[j])
                {
                    while(1)
                    {
                        if(t[i]==s[j])
                        {
                            if(i==l1-1){c++;break;}
                            c++;i++;j++;
                        }
                        else{
                            if(i==l1-1){break;}
                        i++;
                        }
                    }
                }
                if(c==l) {flag=1;break;}
            }
            if(flag==1)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        else
            cout<<"No\n";

    }
    return 0;
}
