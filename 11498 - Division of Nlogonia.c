#include<stdio.h>
int main()
{
    int t,i,m,n,j,a,b;
    for(;;)
    {
        scanf("%d",&t);
        if(t==0)
            break;
        scanf("%d %d",&m,&n);
        for(j=1;j<=t;j++)
        {
            scanf("%d %d",&a,&b);
            if(a==m || b==n)
                printf("divisa\n");
            else if(a>m && b>n)
                printf("NE\n");
            else if(a<m && b>n)
                printf("NO\n");
            else if(a<m && b<n)
                printf("SO\n");
            else if(a>m && b<n)
                printf("SE\n");
        }
    }
    return 0;
}
