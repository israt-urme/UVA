#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        int l=s.length();
        if(l==1){
            if((s[0]-'0')==1 || (s[0]-'0')==4)
                cout<<"+"<<endl;
        }
        else if(l==2){
            if((s[0]-'0')==7 && (s[1]-'0')==8)
                cout<<"+"<<endl;
        }
        else if((s[l-1]-'0')==5 && (s[l-2]-'0')==3)
            cout<<"-"<<endl;
        else if((s[0]-'0')==9 && (s[l-1]-'0')==4)
            cout<<"*"<<endl;
        else
            cout<<"?"<<endl;
    }
    return 0;
}
