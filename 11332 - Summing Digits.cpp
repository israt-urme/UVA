#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) break;

        while(n>9)
        {
            int sum=0;
            while(n!=0)
            {
                int x=n%10;
                sum=sum+x;
                n=n/10;
            }
            n=sum;
        }
        cout<<n<<endl;
    }
    return 0;
}
