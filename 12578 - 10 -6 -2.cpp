#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t;
    double l,w,r,x,y,pi;
    pi=2*acos(0.0);
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>l;
        w = 0.6*l;
        r = 0.2*l;
        x= l*w;
        y= pi*r*r;
        printf("%.2lf %.2lf\n",y,x-y);
    }
    return 0;
}
