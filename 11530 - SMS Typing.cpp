#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    getchar();
    for(int i=1;i<=n;i++)
    {
        getline(cin,s);
        int l=s.length();
        int a=0,s1=0,s2=0,s3=0;
        for(int j=0;j<l;j++)
        {
            if(s[j]=='a' || s[j]=='d' || s[j]=='g' || s[j]=='j' || s[j]=='m' || s[j]=='p' || s[j]=='t' || s[j]=='w' || s[j]==' ')
                a++;
            else if(s[j]=='b' || s[j]=='e' || s[j]=='h' || s[j]=='k' || s[j]=='n' || s[j]=='q' || s[j]=='u' || s[j]=='x')
                s1=s1+2;
            else if(s[j]=='c' || s[j]=='f' || s[j]=='i' || s[j]=='l' || s[j]=='o' || s[j]=='r' || s[j]=='v' || s[j]=='y')
                s2=s2+3;
            else if(s[j]=='s' || s[j]=='z')
                s3=s3+4;
        }
        printf("Case #%d: %d\n",i,a+s1+s2+s3);
    }
    return 0;
}
