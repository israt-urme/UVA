#include<bits/stdc++.h>
using namespace std;

int decToBinary(int n)
{
    int binaryNum[1000];
    int i = 0;
    while (n > 0)
    {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    int c=0;
    for (int j = i - 1; j >= 0; j--)
    {
        if(binaryNum[j]==1)
            c++;
    }
    return c;
}

int hexToDec(int n)
{
    int sum=0,power=16;
    sum=sum+(n%10);
    n=n/10;
    while(n!=0)
    {
        sum=sum+power*(n%10);
        n=n/10;
        power=power*16;
    }
    return sum;
}

int main()
{
    //freopen("output.txt","w",stdout);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int b1=decToBinary(n);
        int h=hexToDec(n);
        int b2=decToBinary(h);
        cout<<b1<<" "<<b2<<endl;
    }
}
