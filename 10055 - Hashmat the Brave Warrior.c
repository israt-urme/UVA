#include<stdio.h>
#include<math.h>
int main()
{
    long long a,b,temp;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        printf("%lld\n",a-b);
    }
    return 0;
}
