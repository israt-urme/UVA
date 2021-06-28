#include<bits/stdc++.h>
using namespace std;

long long checkpalindrome(long long a)
{
    long long p=0;
    while(a!=0)
    {
        p=p*10+(a%10);
        a=a/10;
    }
    return p;
}

int main()
{
    int n,c;
    long long a,p,sum,isum,pcheck;

    cin>>n;
    while(n--)
    {
        scanf("%lld",&a);
        p=checkpalindrome(a);
        sum=p+a;
        c=0;
        while(1)
        {
            isum=sum;
            pcheck=checkpalindrome(isum);
            if(isum==pcheck)
            {
                c++;
                printf("%d %lld\n",c,isum);
                break;
            }
            else
            {
                c++;
                sum=pcheck+isum;
            }
        }
    }
    return 0;
}
