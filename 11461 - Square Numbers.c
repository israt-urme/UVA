#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,x,i,y;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0) break;
        int sum=0;
        for(i=a;i<=b;i++)
        {
            x=sqrt(i);
            y=pow(x,2);
            if(i==y)
                sum++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
