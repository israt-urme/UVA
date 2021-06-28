#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ch;
    int i,c;
    while(getline(cin,ch))
    {
        int a[27]={0},a1[27]={0};
        for(i=0;i<ch.length();i++)
        {
            if(ch[i]>='A' && ch[i]<='Z')
            {
                c=ch[i]-'A';
                a[c]++;
            }
            else if(ch[i]>='a' && ch[i]<='z')
            {
                c=ch[i]-'a';
                a1[c]++;
            }
        }
        int m=0,j,m1=0,M;
        for(j=0;j<26;j++)
        {
            if(a[j]>m)
                m=a[j];
            if(a1[j]>m1)
                m1=a1[j];
        }
        M=max(m,m1);
        for(j=0;j<26;j++)
        {
            if(M==a[j])
                printf("%c",j+'A');
        }
        for(j=0;j<26;j++)
        {
            if(M==a1[j])
                printf("%c",j+'a');
        }
        cout<<" "<<M<<endl;
    }
    return 0;
}
