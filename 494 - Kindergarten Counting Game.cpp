#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    while(gets(a))
    {
        int l=strlen(a),c=0,flag=0;
        for(int i=0;i<l;i++)
        {
            if(a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<='z')
            {
                flag=1;
            }
            else
            {
                flag=0;
                if(a[i-1]>='A' && a[i-1]<='Z' || a[i-1]>='a' && a[i-1]<='z')
                    c++;
            }
        }
        if(a[l-1]>='A' && a[l-1]<='Z' || a[l-1]>='a' && a[l-1]<='z')
            c++;
        cout<<c<<endl;
    }
    return 0;
}
