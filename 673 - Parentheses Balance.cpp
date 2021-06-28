#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    freopen("output.txt","w",stdout);
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char s[300];
        gets(s);
        int l=strlen(s),c=0,c1=0,x=0,x1=0,k,cnt=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='(' || s[i]==')' || s[i]=='[' || s[i]==']')
                cnt++;
        }
        for(int i=0;i<l;i++)
        {
            if(s[i]=='(')
            {
                k=i;
                c++;
                while(1)
                {
                    if(s[i]==')') {s[i]='#';c1++;break;}
                    if(i==l-1) break;
                    i++;
                }
                i=k;
            }
            else if(s[i]=='[')
            {
                k=i;
                x++;
                while(1)
                {
                    if(s[i]==']')
                    {
                        s[i]='#';x1++;break;
                    }
                    if(i==l-1) break;
                    i++;
                }
                i=k;
            }
        }
        //cout<<cnt<<endl;
        //cout<<c<<c1<<endl;
        //cout<<x<<x1<<endl;
        if(l==0) cout<<"Yes\n";
        else if(c==c1 && c>0 && c1>0 && x==0 && x1==0 && c+c1==cnt)
            cout<<"Yes\n";
        else if(x==x1 && c==0 && c1==0 && x>0 && x1>0 && x+x1==cnt)
            cout<<"Yes\n";
        else if(x==x1 && c==c1 && c>0 && c1>0 && x>0 && x1>0 && c+c1+x+x1==cnt)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
