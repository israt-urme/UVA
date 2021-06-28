#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,d1,m1,y1,d2,m2,y2,x;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        scanf("%d/%d/%d",&d1,&m1,&y1);
        scanf("%d/%d/%d",&d2,&m2,&y2);
        if(m1==m2 && d1<d2)
            x=(y1-y2)-1;
        else if(m1<m2)
            x=(y1-y2)-1;
        else
            x=y1-y2;
        if(x<0)
            cout<<"Case #"<<i<<": Invalid birth date\n";
        else if(x>130)
            cout<<"Case #"<<i<<": Check birth date\n";
        else
            cout<<"Case #"<<i<<": "<<x<<"\n";
    }
    return 0;

}
