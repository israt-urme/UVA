#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long n;
    while(t--)
    {
        cin>>n;
        long long sum = (n*(n+1))/2;
        if(sum%3==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

