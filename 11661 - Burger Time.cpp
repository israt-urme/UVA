#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        cin>>s;
        int result=s.size()+1,c=1;
        for(int i=0; i<s.size(); i++)
        {
            int c=1,flag=0;
            if(s[i]=='R')
            {
                while(1)
                {
                    if(s[i]=='D'|| s[i]=='Z')
                    {
                        if(s[i]=='Z')
                        {
                            c=0;i--;break;
                        }
                        else
                            {i--;break;}
                    }
                    else if(s[i]=='R')
                        c=1;
                    else if(s[i]=='.')
                        c++;
                    else
                    {
                        flag=1;i--;
                        break;
                    }
                    i++;
                }
                if(flag==0)
                    result=min(c,result);

            }
            else if(s[i]=='D')
            {
                while(1)
                {
                    if(s[i]=='R'|| s[i]=='Z')
                    {
                        if(s[i]=='Z')
                        {
                            c=0;i--;break;
                        }
                        else
                            {i--;break;}
                    }
                    else if(s[i]=='D')
                        c=1;
                    else if(s[i]=='.')
                        c++;
                    else
                    {
                        flag=1;i--;
                        break;
                    }
                    i++;
                }
                if(flag==0)
                    result=min(c,result);

            }
            else if(s[i]=='Z'){ c=0; result=min(c,result);}

        }
        cout<<result<<endl;
    }
    return 0;
}


