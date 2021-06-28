#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a[10002]={0};
    long long i=0,n,j;
    while(scanf("%lld",&a[i])==1)
    {
        n=i+1;
        sort(a,a+n);
        if(n%2==0)
            cout<<(a[(n/2)-1]+a[n/2])/2<<endl;
        else if(n%2!=0)
            cout<<a[(n/2)]<<endl;
        i++;
    }
}
