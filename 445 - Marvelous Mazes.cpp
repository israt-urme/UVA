#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ch;
    int l;
    while(getline(cin,ch))
    {
        int c=0;
        for(int i=0;i<ch.length();i++)
        {
            if(ch[i]>='0' && ch[i]<='9')
            {
                c=c+(ch[i]-'0');
            }
            else if(ch[i]=='!')
                cout<<"\n";
            else
            {
                while(c!=0)
                {
                    if(ch[i]=='b')
                        cout<<" ";
                    else
                        cout<<ch[i];
                    c--;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
