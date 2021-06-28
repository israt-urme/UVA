#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a;
    getchar();
    while(n--)
    {
        getline(cin,a);
        int m=0,f=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='M'){
                m++;}
            if(a[i]=='F'){
                f++;}
        }
        if(m==f && m+f>2)
            printf("LOOP\n");
        else
            printf("NO LOOP\n");
    }
    return 0;
}
