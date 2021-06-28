#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while(getline(cin,a))
    {
        int l=a.length();
        int i,l2=0,l1,j;
        for( i=0;i<l;i++)
        {
            if(a[i]==' ' || i==l-1)
            {
                if(a[l-1]==' ')
                    l1=i;
                else if(i==l-1)
                    l1=i+1;
                else
                    l1=i;
                for(j=l1-1;j>=l2;j--)
                    cout<<a[j];
                if(i==l-1)
                {
                    if(a[l-1]==' ')
                        cout<<a[i];
                }
                else
                    cout<<a[i];
                l2=i+1;
            }
        }
        cout<<endl;
    }
    return 0;
}
