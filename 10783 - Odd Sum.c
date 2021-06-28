#include<stdio.h>
#include<math.h>
int main()
{
    int i,t,temp,a,b,k,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%d",&a);
        scanf("%d",&b);
        if(b<a)
        {
            temp=b;
            b=a;
            a=temp;
        }
        for(k=a;k<=b;k++)
        {
            if(k%2!=0){
                sum=sum+k;
            }
        }
        printf("Case %d: %d\n",i,sum);

    }
    return 0;
}
