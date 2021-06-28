#include<stdio.h>
int main()
{
    int l,w,h,i;
    int t,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&l,&w,&h);
        sum=sum+1;
        if(l>20 || w>20 || h>20)
            printf("Case %d: bad\n",sum);
        else
            printf("Case %d: good\n",sum);
    }
    return 0;
}
