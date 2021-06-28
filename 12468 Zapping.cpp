#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b;
    while(cin>>a>>b)
    {
        if(a==-1 && b==-1) break;
        if(a>b)
        swap(a,b);
        int x=a+100;
        if((b-a)>(x-b))
            cout<<x-b<<endl;
        else
            cout<<b-a<<endl;
    }
    return 0;
}
