#include<stdio.h>
int main()
{
    int i,t,a[13],j,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        s=0;
        for(j=0;j<13;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]==0)
                s=s+1;
        }
        if(s>0)
            printf("Set #%d: No\n",i);
        else
            printf("Set #%d: Yes\n",i);

    }
    return 0;
}
