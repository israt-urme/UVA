#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if((a+b+c)==3 || (a+b+c)==0)
            cout<<"*\n";
        else if((a+b)==2 && c==0)
            cout<<"C\n";
        else if((a+b)==0 && c==1)
            cout<<"C\n";
        else if((a+c)==0 && b==1)
            cout<<"B\n";
        else if((a+c)==2 && b==0)
            cout<<"B\n";
        else if((c+b)==0 && a==1)
            cout<<"A\n";
        else if((c+b)==2 && a==0)
            cout<<"A\n";
    }
    return 0;
}
