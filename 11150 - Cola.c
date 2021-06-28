#include<stdio.h>
int main()
{
    int n,b,a;
    while(scanf("%d",&n)==1)
    {
        int sum=0;
        sum=n;
        n++;
        while(n>2)
        {
            b=n/3+n%3;
            a=n/3;
            sum=sum+a;
            n=b;
        }
        printf("%d\n",sum);
    }
    return 0;
}
