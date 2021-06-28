#include<stdio.h>
int main()
{
    int n,i,j,k,a,t,m;
    scanf("%d",&t);
    for(m=1;m<=t;m++)
    {
        scanf("%d",&n);
        scanf("%d",&a);
        for(k=1;k<=a;k++){
            for(i=1;i<=n;i++){
                for(j=1;j<=i;j++)
                    printf("%d",i);
                printf("\n");
            }
        for(i=n-1;i>=1;i--){
            for(j=i;j>=1;j--)
                printf("%d",i);
            printf("\n");
        }
        if(m==t)
        {
            if(k==a)
                break;
        }
        printf("\n");
        }
    }
    return 0;
}
