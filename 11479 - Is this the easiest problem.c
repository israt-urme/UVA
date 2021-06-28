#include<stdio.h>
int main()
{
    long long a,b,c,temp;
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if((a+b)<=c || (b+c)<=a || (c+a)<=b)
            printf("Case %d: Invalid\n",i);
        else if(a>0 && b>0 && c>0)
        {
                if(a==b && b==c && c==a)
                    printf("Case %d: Equilateral\n",i);
                else if((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b))
                    printf("Case %d: Isosceles\n",i);
                else
                    printf("Case %d: Scalene\n",i);
        }
        else
            printf("Case %d: Invalid\n",i);
    }
    return 0;

}
