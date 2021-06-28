#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        cin>>s;
        int l=s.length();
        int a=l/n,j=0,sum=a;

        while(sum<=l)
        {
            for(int i=sum-1;i>=j;i--)
                cout<<s[i];

            j=sum;
            sum=sum+a;
        }

        cout<<endl;

    }
    return 0;
}
