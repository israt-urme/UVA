#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,s[10];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int k=0;k<10;k++)
        {
            s[k]=0;
        }
        int j;
        for(int i=1;i<=n;i++)
        {
            if(i<10)
            {
                s[i]++;
            }
            else
            {
                int x=i;
                while(x!=NULL)
                {
                    j=x%10;
                    s[j]++;
                    x=x/10;
                }
            }
        }

        for(int k=0;k<10;k++)
        {
            if(k==9)
                cout<<s[k]<<endl;
            else
                cout<<s[k]<<" ";
        }
    }
    return 0;
}

