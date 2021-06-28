#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a,b,x,y,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        c=0;
        if((a+b)%2==0)
            x=(a+b)/2;
        else
            c=1;
        y=a-x;
        if(x<0 || y<0 || c==1)
            printf("impossible\n");
        else
            if(x>y)
                printf("%d %d\n",x,y);
            else
                printf("%d %d\n",y,x);
    }
    return 0;
}
