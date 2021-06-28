#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    while(getline(cin,a) && getline(cin,b))
    {
        int x[27]={0},y[27]={0},c;
        int la=a.length();
        int lb=b.length();
        for(int i=0;i<la;i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                c=a[i]-'a';
                x[c]++;
            }
        }
        for(int i=0;i<lb;i++)
        {
            if(b[i]>='a' && b[i]<='z')
            {
                c=b[i]-'a';
                y[c]++;
            }
        }
        int m;
        for(int i=0;i<26;i++)
        {
            m=0;
            m=min(x[i],y[i]);
            if(x[i]!=0 && y[i]!=0)
            {
                while(m--)
                {
                    printf("%c",i+'a');
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}
