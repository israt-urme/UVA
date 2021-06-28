#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n>=0 && n<=9)
            cout<<n<<endl;
        else
        {

            int a[10]= {0},j=0;
            for(i=1;; i++)
            {
                if(i>9)
                    break;
                if(n%i==0)
                {
                    a[j]=i;
                    j++;
                }
            }
            int c=0;
            string s;
            int i=0;
            for(int l=j-1;;)
            {
                if(n%a[l]==0)
                {
                    s[i]=a[l]+'0';
                    i++;
                    n=n/a[l];
                }
                else
                    l--;
                if(n==1)
                {
                    break;
                }
                else if(l==0 && n!=0)
                {
                    c=1;
                    break;
                }

            }
            int len=i;
            if(c==1)
                cout<<"-1"<<endl;
            else
            {
                for(int i=len-1; i>=0; i--)
                    cout<<s[i];
                cout<<endl;
            }
        }

    }
    return 0;
}
