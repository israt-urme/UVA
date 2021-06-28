#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int t,n,i,sum=0;
    char c[10];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",c);
        if(strcmp(c,"donate")==0){
            scanf("%d",&n);
            sum=sum+n;
        }
        if(strcmp(c,"report")==0)
            printf("%d\n",sum);
    }
    return 0;
}

