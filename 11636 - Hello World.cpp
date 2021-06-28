#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int j=0,i;
    while(cin>>n)
    {
        if(n<0)
            break;
        int c=0;
        for(i=1;i<=n;)
        {
            i=i*2;
            if(i<=n || (n>i/2 && n<i))
                c++;
        }
        j++;
        printf("Case %d: %d\n",j,c);
    }
    return 0;
}

