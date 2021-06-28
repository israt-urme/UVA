#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    while(cin>>n)
    {
        if(n<0) break;
        if(n==0) cout<<"0\n";
        else{
        string s="",x="";
        stringstream ss;
        while(n!=0)
        {
            t=n%3;
            ss<<t;
            s=ss.str();
            n=n/3;
        }
        reverse(s.begin(),s.end());
        cout<<s;
        cout<<endl;
        }
    }
}
