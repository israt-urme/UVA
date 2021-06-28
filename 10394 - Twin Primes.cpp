#include<bits/stdc++.h>
using namespace std;

int a[20000003];
int b[20000003];
int n = 20000000;

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

void twinprimes()
{
    int i,j=1;
    for(i=2;i<=n;i++)
    {
        if(a[i]==0 && a[i+2]==0){
            b[j]=i;
            j++;
        }
    }
}

int main()
{
    sieve();
    twinprimes();
    int s;
    while(cin>>s)
    {
        cout<<"("<<b[s]<<", "<<b[s]+2<<")"<<endl;
    }
    return 0;
}
