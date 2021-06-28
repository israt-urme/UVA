#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    int i=0;
    gets(name);
    while(name[i]!="\n")
    {
        printf(" %c",name[i]);
        i++;
    }
    return 0;
}
