#include<bits/stdc++.h>
using namespace std;
#define m 10000
int main()
{
    char a[m],a1[m],ra[m];
    int i;
    while(1)
    {
        gets(a);
        if(strcmp(a,"DONE")==0) break;
        int l=strlen(a);
        int l1=0,j=0;
        for(i=0;i<l;i++)
        {
            if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
                if(a[i]>='A' && a[i]<='Z'){
                    a1[j]=a[i]+32;
                }
                else{
                    a1[j]=a[i];
                }
                if(j<l){
                    j++;l1++;}
                else break;
            }
        }
        int k=0;
        for(j=l1-1;j>=0;j--)
        {
            ra[k]=a1[j];
            if(k<l1)
                k++;
        }
        int l2=0;
        for(k=0;k<l1;k++)
        {
            if(ra[k]==a1[k])
                l2++;
        }
        if(l1==l2)
            cout<<"You won't be eaten!\n";
        else
            cout<<"Uh oh..\n";
    }
    return 0;
}
