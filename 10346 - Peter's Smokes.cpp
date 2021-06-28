#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,a,b,c;
    while(cin>>n>>k)
    {
        a=n;
        int sum=0;
        while(a>=k)//a need to divisable by k
        {
            b=a/k;
            sum=sum+b;
            a=b+(a%k);//to count all the remaining
        }
        cout<<sum+n<<endl;
    }
    return 0;
}

