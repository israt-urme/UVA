#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum,b[103],x,n;
    string a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            if(a=="LEFT"){
                b[i]='l';
                sum--;
            }
            else if(a=="RIGHT"){
                b[i]='r';
                sum++;
            }
            else if(a=="SAME")
            {
                cin>>a>>x;
                if(b[x]=='l') {b[i]='l';sum--;}
                else if(b[x]=='r') {b[i]='r';sum++;}
            }

        }
        cout<<sum<<endl;
    }
}
