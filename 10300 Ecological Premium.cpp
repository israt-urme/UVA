#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    while(n--)
    {
        int f,a,b,c,sum=0;
        cin>>f;
        while(f--)
        {
            cin>>a>>b>>c;
            sum=sum+(a*c);
        }
        cout<<sum<<endl;
    }
    return 0;
}
