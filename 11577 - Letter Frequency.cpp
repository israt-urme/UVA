#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[202];
    int a1,n;
    int s[27];
    cin>>n;
    getchar();
    while(n--)
    {
        for(int i=0;i<26;i++)
            s[i]=0;
        gets(a);
        int l=strlen(a);
        for(int j=0;j<l;j++)
        {
            if((a[j]>='a' && a[j]<='z') || (a[j]>='A' && a[j]<='Z'))
            {
                if(a[j]>='A' && a[j]<='Z')
                a[j]=a[j]+32;
                a1=a[j]-'a';
                s[a1]++;
            }
        }
        int m=0;
        for(int j=0;j<26;j++)
        {
            if(s[j]>m)
                m=s[j];
        }
        for(int j=0;j<26;j++)
        {
            if(m==s[j])
                printf("%c",j+'a');
        }
        cout<<endl;
    }
    return 0;
}
