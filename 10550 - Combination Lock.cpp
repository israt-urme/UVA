#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,a,b,c,x,y,z;
    while(cin>>s>>a>>b>>c)
    {
        if(a==0 && b==0 && c==0 && s==0)
            break;
        if(s<a)
            x=40-a+s;
        else
            x=s-a;
        if(a>b)
            y=40-a+b;
        else
            y=b-a;
        if(b<c)
            z=40-c+b;
        else
            z=b-c;
        cout<<(x*9+y*9+z*9)+1080<<endl;
    }
    return 0;
}
