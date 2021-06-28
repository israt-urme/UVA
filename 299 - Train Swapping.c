#include<stdio.h>
int main()
{
    int t,i,n,a[100],j,temp,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int c=0;
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        for(j=0;j<n;j++)
        {
            for(k=0;k<n-1;k++)
            {
                if(a[k]>a[k+1])
                {
                    temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                    c++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",c);
    }
    return 0;
}
