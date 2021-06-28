#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,temp,k,sum,max,x;
    while(scanf("%d %d",&i,&j)==2)
    {
        printf("%d %d ",i,j);
        if(j<i)
        {
            temp=j;
            j=i;
            i=temp;
        }
        max=0;
        for(k=j;k>=i;k--)
        {
            sum=0;
            x=k;
            while(1)
            {
                if(x==1){
                    sum=sum+1;
                    if(sum>max)
                        max=sum;
                    break;
                }
                else if(x%2!=0){
                    x=3*x+1;
                    sum=sum+1;
                }
                else if(x%2==0){
                    x=x/2;
                    sum=sum+1;
                }
            }
        }
        printf("%d\n",max);

    }
    return 0;
}
