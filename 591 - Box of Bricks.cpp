#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[102],j=1;
    while(cin>>n)
    {
        if(n==0) break;
        int sum=0,i;
        for(i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
        }
        int x=sum/n;
        int c=0;
        for(i=0;i<n;i++)
        {
            if(x>a[i])
                c=c+(x-a[i]);

        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",j,c);
        j++;
    }

    return 0;
}

