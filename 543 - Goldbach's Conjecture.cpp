#include<bits/stdc++.h>
using namespace std;

int a[1000002];
int n = 1000000;

void sieve()
{
    int i,j;
    a[1]=1;
    for(i=4;i<=n;i+=2)
        a[i]=1;
    for(i=3;i*i<=n;i+=2)
    {
        if(a[i]==0)
        {
            for(j=i*i;j<=n;j+=i)
                a[j]=1;
        }
    }

}

int main()
{
    sieve();
    int n,sum,flag,i;
    while(cin>>n)
    {
        if(n==0) break;
        flag=0;
        for(i=1;i<n;i++)
        {
            if(a[i]==0){
                sum=n-i;
            //cout<<sum;
            if(a[sum]==0){
                flag=1;
                cout<<n<<" = "<<i<<" + "<<sum<<endl;
                break;
            }
            }
        }
        if(flag==0)
            cout<<"Goldbach's conjecture is wrong."<<endl;
    }
    return 0;
}
