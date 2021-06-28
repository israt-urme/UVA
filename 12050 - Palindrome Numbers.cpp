#include<bits/stdc++.h>
using namespace std;

vector<int>a(2000000002);
long long n=2000000002;

int isPalindrome(long long n)
{
    long long i, rev = 0;
    for ( i = n; i > 0; i /= 10)
        rev = rev*10 + i%10;

    return (n==rev);
}

void countPal()
{
    long long i;
    for ( i = 1; i <= n; i++)
        if (isPalindrome(i)){a.push_back(i);}
}
int main()
{
    countPal();
    int i;
    while(cin>>i)
    {
        if(i==0) break;
        cout<<a[i-1]<<endl;
    }

    return 0;
}
