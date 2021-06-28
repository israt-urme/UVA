#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[110],s[16]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0,sum=0;
    for(i=0,j=0;;i++,j++)
    {
        cout<<a[i]<<": "<<s[j]<<endl;
        if(j==15)
        {
            c++;
            if(sum>0) break;
            j=-1;
        }
        if(i==n-1){
            i=-1;
            sum++;
        }
    }
    return 0;
}
