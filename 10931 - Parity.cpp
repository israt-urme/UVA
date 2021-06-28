#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        int i=0,c=0,b;
        printf("The parity of ");
        string x="";
        stringstream ss;
        while(n>0)
        {
            b=n%2;
            ss<<b;
            x=ss.str();
            if(b==1)
                c++;
            n=n/2;
            i++;
        }
        reverse(x.begin(),x.end());
        cout<<x;
        printf(" is %d (mod 2).\n",c);
    }
    return 0;
}
