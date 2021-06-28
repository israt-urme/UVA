#include<stdio.h>
int main()
{
    int n,sum1,sum,a,b,i;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        n=n+1;
        sum1=0;
        sum=0;
        while(n>2)
        {
            b=n/3+n%3;
            a=n/3;
            sum1=sum1+a;
            n=b;
        }
        printf("%d\n",sum1);

    }
    return 0;
}
