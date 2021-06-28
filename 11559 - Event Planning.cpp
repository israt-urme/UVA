#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,h,w,m,p,a,flag;
    while(scanf("%d %d %d %d",&n,&b,&h,&w)==4)
    {
        m=b,flag=0;
        for(int i=1;i<=h;i++)
        {
            int sum=0;
            cin>>p;
            for(int j=1;j<=w;j++)
            {
                cin>>a;
                if(a>sum)
                    sum=a;
            }
            if(sum>=n)
            {
                m=min(m,n*p);
                flag=1;
            }
        }
        if(m<b)
            printf("%d\n",m);
        else
            printf("stay home\n");
    }
    return 0;
}

