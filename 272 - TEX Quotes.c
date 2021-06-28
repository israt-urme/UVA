#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000];
    int c=0;
    while(gets(a)){
    int l,i;
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='"'){
            c=c+1;
            if(c%2!=0)
                printf("``");
            else
                printf("''");
            }
        else
            printf("%c",a[i]);
    }
    printf("\n");
    }
    return 0;

}
