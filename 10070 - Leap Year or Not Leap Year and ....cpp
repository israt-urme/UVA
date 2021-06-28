#include<bits/stdc++.h>
using namespace std;

int func(string n,int x)
{
    int sum=0,mod;
    for(int i=0; i<n.size(); i++)
    {
        sum=sum+(n[i]-'0');
        mod=sum%x;
        sum=mod*10;
    }
    if(mod==0)
        return 0;
    else return 1;
}

int main()
{
    string n;
    int f=0;
    while(cin>>n)
    {
        int flag,flag1,flag2;
        if(f==1)
            cout<<endl;
        f=1;
        flag =1,flag1=1,flag2=1;
        if(func(n,4)==0)
        {
            if(func(n,100)==0)
            {
                if(func(n,400)==0)
                    printf("This is leap year.\n");
                else
                    flag=0;
            }
            else
                printf("This is leap year.\n");
        }
        else
            flag=0;
        if(func(n,15)==0)
            printf("This is huluculu festival year.\n");
        else
            flag1=0;
        if(func(n,55)==0 && flag ==1)
            printf("This is bulukulu festival year.\n");
        else
            flag2=0;
        if(flag==0 && flag1==0 && flag2==0)
            printf("This is an ordinary year.\n");

    }
    return 0;
}

