#include<stdio.h>
int main()
{
    int t,a,b,i,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && a<c)
            printf("Case %d: %d\n",i,a);
        else if(a<b && a>c)
            printf("Case %d: %d\n",i,a);
        else if(b>a && b<c)
            printf("Case %d: %d\n",i,b);
        else if(b<a && b>c)
            printf("Case %d: %d\n",i,b);
        else if(c>a && c<b)
            printf("Case %d: %d\n",i,c);
        else if(c<a && c>b)
            printf("Case %d: %d\n",i,c);
    }
    return 0;
}

