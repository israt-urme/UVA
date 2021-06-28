#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m;
    char c;
    double y=5/60.0,x;
    while(cin>>h>>c>>m)
    {
        if(h==0 && m==0) break;
        if(m==0)
        {
            x=((12-h)*5)*6;
        }
        else if((m/5.0)<h)
        {
            x=((((12-h)*5)+m)-(y*m))*6;
        }
        else if((m/5.0)>h)
        {
            x=((m-(h*5))-(y*m))*6;
        }
        else if((m/5.0)==h)
        {
            x=(m*y)*6;
        }
        if((360-x)>x)
            printf("%.3lf\n",abs(x));
        else
            printf("%.3lf\n",360-x);
    }
    return 0;
}
