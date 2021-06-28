#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        double a[x],y;
        for(int j=0;j<x;j++)
        {
            cin>>a[j];
        }
        while(x>=1)
        {
            if(x==1)
            {
                for(int j=0;j<x;j++)
                    y=a[j];
            }
            else
            {
                for(int j=0;j<x;j++)
                {
                    a[j]=(a[j]+a[j+1])/2.0;
                }
            }
            x--;
        }
        printf("Case #%d: %.3lf\n",i,y);
    }
    return 0;
}
