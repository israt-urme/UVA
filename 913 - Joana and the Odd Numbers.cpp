#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(cin>>n)
    {
        long long int sum=0,i;
        for(i=1;i<=n;i=i+2)
        {
            sum=sum+i;
        }
        long long int x=0,sum1=0,j;
        for(j=(sum*2)-1;j>=1;j=j-2)
        {
            sum1=sum1+j;
            x++;
            if(x==3)
                break;
        }
        cout<<sum1<<endl;
    }
    return 0;
}

