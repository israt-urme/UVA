#include<stdio.h>
#include<string.h>
int main()
{
    char ch[200];
    int sum=0;
    for(;;)
    {
        scanf("%s",ch);
        sum=sum+1;
        if(strcmp(ch,"HELLO")==0)
            printf("Case %d: ENGLISH\n",sum);
        else if(strcmp(ch,"HOLA")==0)
            printf("Case %d: SPANISH\n",sum);
        else if(strcmp(ch,"HALLO")==0)
            printf("Case %d: GERMAN\n",sum);
        else if(strcmp(ch,"BONJOUR")==0)
            printf("Case %d: FRENCH\n",sum);
        else if(strcmp(ch,"CIAO")==0)
            printf("Case %d: ITALIAN\n",sum);
        else if(strcmp(ch,"ZDRAVSTVUJTE")==0)
            printf("Case %d: RUSSIAN\n",sum);
        else if(strcmp(ch,"#")==0)
            break;
        else
            printf("Case %d: UNKNOWN\n",sum);
    }
    return 0;
}
