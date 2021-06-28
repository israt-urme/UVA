#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s,x;
    map<string,int>m;
    getchar();
    while(t--)
    {
        cin>>x;
        getline(cin,s);
        int l=s.size();
        m[x]++;
    }

    map<string,int>::iterator itr;
    for(itr=m.begin(); itr!=m.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    return 0;
}
