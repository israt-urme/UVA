#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[33];
    int l,i;
    while(cin>>c)
    {
        l=strlen(c);
        for(i=0;i<l;i++)
        {
            if(c[i]=='A' || c[i]=='B' || c[i]=='C')
                c[i]='2';
            else if(c[i]=='D' || c[i]=='E' || c[i]=='F')
                c[i]='3';
            else if(c[i]=='G' || c[i]=='H' || c[i]=='I')
                c[i]='4';
            else if(c[i]=='J' || c[i]=='K' || c[i]=='L')
                c[i]='5';
            else if(c[i]=='M' || c[i]=='N' || c[i]=='O')
                c[i]='6';
            else if(c[i]=='P' || c[i]=='Q' || c[i]=='R' || c[i]=='S')
                c[i]='7';
            else if(c[i]=='T' || c[i]=='U' || c[i]=='V')
                c[i]='8';
            else if(c[i]=='W' || c[i]=='X' || c[i]=='Y' || c[i]=='Z')
                c[i]='9';
            else
                c[i]=c[i];
        }
        for(i=0;i<l;i++)
        {
            cout<<c[i];
        }
        cout<<endl;
    }
    return 0;
}
