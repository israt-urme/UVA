#include<stdio.h>
int main()
{
    int n,a[100],c,i,j,x,y;
    scanf("%d",&n);
    printf("Lumberjacks:\n");
    for(i=1;i<=n;i++)
    {
        for(j=0;j<10;j++)
            scanf("%d",&a[j]);
        x=a[0];
        y=a[1];
        c=0;
        int c1=0;
        if(x<y)
        {
            for(j=0;j<10-1;j++)
            {
                if(a[j]<a[j+1])
                    c++;
                else
                    c1++;
            }
        }
        if(x>y)
        {
            for(j=0;j<10-1;j++)
            {
                if(a[j]>a[j+1])
                    c++;
                else
                    c1++;
            }
        }
        if(c==9)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
    return 0;
}

