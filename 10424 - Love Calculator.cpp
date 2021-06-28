#include<bits/stdc++.h>
using namespace std;

int f(string a,int l)
{
    int c=0;
    for(int i=0;i<l;i++)
    {
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
        {
            if(a[i]>='A' && a[i]<='Z')
            a[i]=a[i]+32;
            int sum=a[i]-96;
            c=c+sum;
        }
    }
    while(c>9)
    {
        int sum=0;
        while(c!=0)
        {
            int x=c%10;
            sum=sum+x;
            c=c/10;
        }
        c=sum;
    }
    return c;
}

int main()
{
    string a,b;
    while(getline(cin,a))
    {
        getline(cin,b);
        int l=a.length();
        double cr=f(a,l);
        int l1=b.length();
        double cr1=f(b,l1);
        double r;
        if(cr>cr1)
            r=(cr1/cr)*100;
        else
            r=(cr/cr1)*100;
        printf("%.2lf %%\n",r);
    }
    return 0;
}
