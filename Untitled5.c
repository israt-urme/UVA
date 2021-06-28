#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,a[200],s[10];
    freopen("output.txt","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
        int j=0;
        for(int k=0;k<10;k++)
        {
            s[k]=0;
        }
        for(long long int i=1;i<=n;i++)
        {
            if(i<10)
            {
                a[j]=i;
                j++;
            }
            else
            {
                long long int x=i;
                while(x!=NULL)
                {
                    a[j]=x/10;
                    j++;
                    if((x%10)<10)
                    {
                        a[j]=x%10;
                        j++;
                        break;
                    }
                    else
                    {
                        if((x%10)==0)
                        {
                            a[j]=0;
                            j++;
                            break;
                        }
                        else
                            x=x%10;
                    }
                }
            }
        }
        long long int l=j;
        for(long long int j=0;j<l;j++){
            s[a[j]]++;
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

