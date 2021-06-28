#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum;
    printf("PERFECTION OUTPUT\n");
    for(;;)
    {
        scanf("%d",&n);
        sum=0;
        if(n==0){
            break;
        }
        for(i=1;i<n;i++)
        {
            if(n%i==0){
                sum=sum+i;
            }
        }
        if(sum==n)
            printf("%5.d  PERFECT\n",n);
        else if(sum>n)
            printf("%5.d  ABUNDANT\n",n);
        else if(sum<n)
            printf("%5.d  DEFICIENT\n",n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}

