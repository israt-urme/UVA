#include<stdio.h>
#include<string.h>
int main()
{
    int sum=0;
    char c[10];
    for(;;)
    {
        scanf("%s",c);
        sum=sum+1;
        if(strcmp(c,"Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n",sum);
        else if(strcmp(c,"Umrah")==0)
            printf("Case %d: Hajj-e-Asghar\n",sum);
        else if(strcmp(c,"*")==0)
            break;

    }
    return 0;
}
