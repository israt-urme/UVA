#include<stdio.h>
int main()
{
    int n,a[1000],i,sum=0;
    for(;;){
        scanf("%d",&n);
        if(n==0)
            break;
        int s=0;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
                s--;
            else
                s++;
        }
        sum++;
        printf("Case %d: %d\n",sum,s);
    }
    return 0;

}
