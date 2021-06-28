#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j,integer,c1;
    string s,s1,c;
    cin>>n;
    while(n--)
    {
        cin>>s>>s1;
        reverse(s.begin(), s.end());
        reverse(s1.begin(), s1.end());
        int integer1=atoi(s.c_str());
        int integer2=atoi(s1.c_str());
        integer=integer1+integer2;
        stringstream ss;
        ss << integer;
        c=ss.str();
        reverse(c.begin(), c.end());
        c1=atoi(c.c_str());
        cout<<c1<<endl;
    }
    return 0;
}
