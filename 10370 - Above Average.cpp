#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[1002];
        float sum=0,avg,c=0,abAvg;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        avg=sum/float(n);
        for(i=0;i<n;i++)
        {
            if(avg<a[i])
                c++;
        }
        abAvg=(c/(n*1.0))*100.0;
        printf("%.3f%%\n",abAvg);
    }
    return 0;
}
