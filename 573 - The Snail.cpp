#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,u,d,f,sum,x;
    while(cin>>h>>u>>d>>f)
    {
        if(h==0) break;
        int c=1,flag=1;
        sum=0.0;
        x=((f*u)/100.0);
        while(1)
        {
            if(c>1){
                if(u>0.0){
                    u=u-x;
                    sum = sum+u;
                }
            }
            else
                sum = sum+u;

            if(sum<=h)
            {
                sum=sum-d;
                if(sum<0.0){flag=0;break;}
            }
            else break;
            c++;
        }
        if(flag==1)
        {
            printf("success on day ");
            cout<<c<<endl;
        }
        else
        {
            printf("failure on day ");
            cout<<c<<endl;
        }
    }
    return 0;
}
