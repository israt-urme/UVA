#include<stdio.h>
#include<math.h>
int main()
{
    double d,v,u,td,ts,t;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf %lf %lf",&d,&v,&u);
        if(u==0 || v==0 || u==v || u<v)
            printf("Case %d: can't determine\n",i+1);
        else
        {
            ts=d/u;//at shortest time
            td=d/(sqrt(u*u-v*v));//at shortest path
            if(ts<td)
                t=td-ts;
            else
                t=ts-td;
            printf("Case %d: %.3lf\n",i+1,t);
        }
    }
    return 0;
}


