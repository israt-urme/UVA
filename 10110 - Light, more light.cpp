#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int t,n,i;
    freopen("output.txt","w",stdout);
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        i=sqrt(n);
        if(i*i==n)
            cout<<"yes\n";
        else
            cout<<"no\n";


    }
    return 0;

}
