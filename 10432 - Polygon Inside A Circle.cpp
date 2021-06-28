#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("output.txt","w",stdout);
    double r,n,a,angle,area;
    double Pi=2*acos(0.0);
    while(cin>>r>>n)
    {
        a=(2*180)/n;
        angle=sin(a*(Pi/180));
        area=.5*n*(r*r)*sin(a*(Pi/180));
        printf("%.3f\n",area);
    }
    return 0;
}
