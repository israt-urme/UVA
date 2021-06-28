#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[130];
    int n,i,l,c,c1,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        gets(a);
        l=strlen(a);
        c=0;
        c1=0;
        for(j=0;j<l;j++)
        {
            if(a[j]=='(' || a[j]=='[')
                c++;
            if(a[j]==')' || a[j]==']')
                c1++;
        }
        if(c==c1)
            printf("Yes\n");
        else
            printf("No\n");

    }
    return 0;
}
