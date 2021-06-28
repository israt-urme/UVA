#include<stdio.h>
int main()
{
    unsigned long long a,b,sum;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
        int c=0;
        sum=0;
        while(a!=0 || b!=0)
        {
            sum=sum+a%10+b%10;
            if(sum>9){
                c++;
            }
            sum=sum/10;
            a=a/10;
            b=b/10;
        }
        if(c==0)
            printf("No carry operation.\n");
        else if(c==1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n",c);
    }
    return 0;
}
