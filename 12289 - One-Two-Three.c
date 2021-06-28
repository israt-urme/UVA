#include<stdio.h>
#include<string.h>
int main()
{
    int t,l,i,j;
    char a[5];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",a);
        l=strlen(a);
        if(l==3){
        for(j=0;j<3;j++){
        if(a[0]=='o' && a[1]=='n' && a[2]=='e')
            printf("1\n");
        else if(a[0]=='o' && a[1]=='n')
            printf("1\n");
        else if(a[0]=='o' && a[2]=='e')
            printf("1\n");
        else if(a[1]=='n' && a[2]=='e')
            printf("1\n");

        else if(a[0]=='t' && a[1]=='w' && a[2]=='o')
            printf("2\n");
        else if(a[0]=='t' && a[1]=='w')
            printf("2\n");
        else if(a[0]=='t' && a[2]=='o')
            printf("2\n");
        else if(a[1]=='w' && a[2]=='o')
            printf("2\n");
        }
    }

        else{
        for(j=0;j<5;j++){
        if(a[0]=='t' && a[1]=='h' && a[2]=='r' && a[3]=='e' && a[4]=='e')
            printf("3\n");
        else if(a[0]=='t' && a[1]=='h' && a[2]=='r' && a[3]=='e')
            printf("3\n");
        else if(a[0]=='t' && a[1]=='h' && a[2]=='r' && a[4]=='e')
            printf("3\n");
        else if(a[0]=='t' && a[1]=='h' && a[3]=='e' && a[4]=='e')
            printf("3\n");
        else if(a[0]=='t' && a[2]=='r' && a[3]=='e' && a[4]=='e')
            printf("3\n");
        else if(a[1]=='h' && a[2]=='r' && a[3]=='e' && a[4]=='e')
            printf("3\n");
        }
        }
    }
    return 0;
}
