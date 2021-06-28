#include<stdio.h>
int main()
{
    int n,temp,i,j,a[1000];
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        int c=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    c++;
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",c);
    }
    return 0;
}

