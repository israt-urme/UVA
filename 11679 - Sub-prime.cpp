#include<bits/stdc++.h>
using namespace std;
/*debit position e tk minus kore resource komabo..
  credit position e tk plus kore resource barabo..
*/
int main()
{
    int b,n,i,d,c,tk;
    while(scanf("%d %d",&b,&n)==2)
    {
        if(b==0 && n==0) break;
        int a[b+1],flag=0;
        for(i=1;i<=b;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<=n;i++)
        {
            scanf("%d %d %d",&d,&c,&tk);
            a[d]=a[d]-tk;
            a[c]=a[c]+tk;
        }
        for(i=1;i<=b;i++)
        {
            if(a[i]<0)
                flag=1;
        }
        if(flag==0)
            printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}
