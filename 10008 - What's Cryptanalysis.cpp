#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("output.txt","w",stdout);
    int t,a[27]= {0},c,i,j;
    string s;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,s);
        for(i=0; i<s.length(); i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                c=s[i]-'A';
                a[c]++;
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                c=s[i]-'a';
                a[c]++;
            }
        }
    }
    int m=0;
    for(j=0; j<26; j++)
    {
        if(a[j]>m)
            m=a[j];
    }
    int flag=0;
    for(j=0; j<26; j++)
    {
        while(1)
        {
            if(a[j]==m)
            {
                printf("%c %d\n",j+'A',a[j]);
                flag=1;
            }
            if(j==26)break;
            j++;
        }
        if(flag==1)
        {
            j=-1;
            m--;
        }
        if(m==0) break;
    }
}
