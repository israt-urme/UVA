#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    while(cin>>a)
    {
        int l=a.length(),flag=0,flag1=0;
        if(l==0) continue;
        string b=a;
        reverse(b.begin(), b.end());
        if(b==a)
            flag=1;
        string c=a;
        int cnt=0;
        for(int i=0;i<l;i++)
        {
            if(c[i]=='A')
                c[i]='A';
            else if(c[i]=='E')
                c[i]='3';
            else if(c[i]=='H')
                c[i]='H';
            else if(c[i]=='I')
                c[i]='I';
            else if(c[i]=='J')
                c[i]='L';
            else if(c[i]=='L')
                c[i]='J';
            else if(c[i]=='M')
                c[i]='M';
            else if(c[i]=='O')
                c[i]='O';
            else if(c[i]=='S')
                c[i]='2';
            else if(c[i]=='T')
                c[i]='T';
            else if(c[i]=='U')
                c[i]='U';
            else if(c[i]=='V')
                c[i]='V';
            else if(c[i]=='W')
                c[i]='W';
            else if(c[i]=='X')
                c[i]='X';
            else if(c[i]=='Y')
                c[i]='Y';
            else if(c[i]=='Z')
                c[i]='5';
            else if(c[i]=='1')
                c[i]='1';
            else if(c[i]=='2')
                c[i]='S';
            else if(c[i]=='3')
                c[i]='E';
            else if(c[i]=='5')
                c[i]='Z';
            else if(c[i]=='8')
                c[i]='8';
            else
                cnt++;
        }
        reverse(c.begin(),c.end());
        if(c==a && cnt==0)
            flag1=2;

        if(flag==1 && flag1==2)
            cout<<a<<" -- is a mirrored palindrome.\n";
        else if(flag==1)
            cout<<a<<" -- is a regular palindrome.\n";
        else if(flag1==2)
            cout<<a<<" -- is a mirrored string.\n";
        else
            cout<<a<<" -- is not a palindrome.\n";

        cout<<endl;
    }
}
