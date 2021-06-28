#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        int flag=0,flag1=0,a[101][101],row,colom,c=0,c1=0,rowcount=0,colcount=0;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        for(i=1; i<=n; i++)
        {
            int sum=0,sum1=0;
            for(j=1; j<=n; j++)
            {


                sum=sum+a[i][j];

                sum1=sum1+a[j][i];


            }
            c++;
            c1++;

            if(sum%2==0 && sum1%2==0)
                flag=1;
            else
            {
                if(sum%2!=0)
                {
                    row=c;
                    rowcount++;
                }

                if(sum1%2!=0)
                {
                    colom=c1;
                    colcount++;
                }

                flag1=2;
            }

        }

        if(flag1==2 && rowcount==1 && colcount==1)
        {
            printf("Change bit (%d,%d)\n",row,colom);

        }
        else if(flag1==2 &&( rowcount>1 || colcount>1) )
            cout<<"Corrupt"<<endl;
        else
            cout<<"OK"<<endl;
    }

}
