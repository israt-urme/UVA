#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[3004],c[3004],s;
    while(cin>>n)
    {
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1) cout<<"Jolly\n";
        else if(n==2)
        {
            if(abs(a[0]-a[1])==1)
                cout<<"Jolly\n";
            else
                cout<<"Not jolly\n";
        }
        else
        {
            for(i=0; i<(n-1); i++)
            {
                if(a[i]<a[i+1])
                {
                    c[i]= a[i+1]-a[i];
                }
                else
                {
                    c[i] = a[i]-a[i+1];
                }
            }
            sort(c,c+(n-1));
            int f=1;
            for(i=0; i<(n-2); i++)
            {
                if(c[0]=1)
                    if((c[i+1]-c[i])==1)
                        f=1;
                else
                {
                    f=0; break;
                }

            }
            if(f==1)
                cout<<"Jolly\n";
            else
                cout<<"Not jolly\n";
        }
    }
    return 0;
}
