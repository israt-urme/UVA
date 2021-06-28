#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int t,n,i,sum=0;
    char c[100];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        gets(c);
        if(strcmp(c,"donate u")==0){
            scanf("%d",&n);
            sum=sum+n;
        }
        if(strcmp(c,"report")==0)
            printf("%d\n",sum);
    }
    return 0;
}


