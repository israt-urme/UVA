#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    //freopen("output.txt","w",stdout);
    cin>>t;
    string s;
    getchar();
    while(t--)
    {
        getline(cin,s);

        int l=s.length();
        //cout<<l<<endl;
        int l1=sqrt(l),c=0,c1=0,i;
        if(l1*l1==l)
        {
            for(i=0;;i+=l1)
            {
                cout<<s[i];
                c++;
                if(i==l-1) {cout<<endl;break;}
                else if(c==l1){
                    c1++;
                    i=c1;
                    cout<<s[i];
                    c=1;
                    continue;
                }
            }
        }
        else
            cout<<"INVALID"<<endl;
    }
}
