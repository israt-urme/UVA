#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s[10000], str[10000], rts[10000];
    int l, len, k, j, i;
    while(1){
        gets(s);
        if(!strcmp(s, "DONE")){
            break;
        }
        l = strlen(s);

        k = 0;
        for(i=0; i<l; i++){
            if(s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + ('a' - 'A');
            if(s[i] >= 'a' && s[i] <= 'z'){
                str[k++] = s[i];
            }
        }
        str[k] = '\0';
        l = strlen(str);
        for(i = 0; i < l; i++){
            rts[l-i-1] = str[i];
        }
        rts[l] = '\0';

        if(!strcmp(str, rts)){
            printf("You won't be eaten!\n");
        }else{
            printf("Uh oh..\n");
        }
    }
    return 0;
}