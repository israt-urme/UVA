#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int x=1,n,i,j,k,temp;
    while(cin>>s)
    {
        if(s=="n") break;
        int l=s.length();
        cin>>n;
        printf("Case %d:\n",x);
        while(n--)
        {
            cin>>i>>j;
            if(i>j)
            {
                temp=i;
                i=j;
                j=temp;
            }
            int flag=0,flag2=0;
            for(k=i;k<=j;k++)
            {
                if(s[k]=='0')
                    flag=1;
                else
                    flag2=2;
            }
            if(flag==1 && flag2==2)
                printf("No\n");
            else
                printf("Yes\n");
        }
        x++;
    }
    return 0;
}
