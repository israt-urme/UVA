#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,i,j;
    while(cin>>n>>c)
    {
        int a[n+1]= {},b[n+1];
        for(i=4; i<=n; i+=2)
            a[i]=1;
        for(i=3; i*i<=n; i+=2)
        {
            if(a[i]==0)
            {
                for(j=i*i; j<=n; j+=i)
                {
                    a[j]=1;
                }
            }
        }
        j=1;
        for(i=1; i<=n; i++)
        {
            if(a[i]==0)
            {
                b[j]=i;
                j++;
            }
        }
        int len=j-1;
        printf("%d %d:",n,c);
        if(len%2==0)
            c=c*2;
        else
            c=(c*2)-1;
        if(c>len)
        {
            for(i=1; i<=len; i++)
                printf(" %d",b[i]);
        }
        else
        {
            int centr=(len-c)/2,sum=1;
            for(i=centr+1;; i++)
            {
                printf(" %d",b[i]);
                if(sum==c)
                    break;
                else
                    sum++;
            }
        }
        cout<<endl<<endl;
    }
    return 0;
}
