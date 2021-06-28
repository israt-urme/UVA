#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double c,f,F,C;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>c>>f;
        F=((1.8*c) + 32)+f;
        C= ((F-32)*5)/9.0;
        printf("Case %d: %.2lf\n",i,C);
    }
    return 0;
}

