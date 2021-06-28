#include<bits/stdc++.h>
using namespace std;
void mergearray(long int a[],long int l,long int m,long int r);
void mergesort(long int a[],long int l,long int r)
{
    long int m=0;
    if(l<r)
    {
        m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);

        mergearray(a,l,m,r);
    }
}

void mergearray(long int a[],long int l,long int m,long int r)
{
    long int n1,n2,i,j;
    n1=m-l+1;
    n2=r-m;
    long int L[n1],R[n2];

    for(i=0;i<n1;i++)
        L[i]=a[l+i];
    for(j=0;j<n2;j++)
        R[j]=a[m+1+j];

    i=0;j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
            k++;
        }
        if(L[i]>R[j])
        {
            a[k]=R[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }
}

int main()
{
    long int n,i,j,temp;
    while(cin>>n)
    {
        long int a[n];
        if(n==0) break;
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
        mergesort(a,0,n-1);
        for(i=0;i<n;i++)
        {
            if(i==n-1)
                printf("%ld\n",a[i]);
            else
                printf("%ld ",a[i]);
        }
    }
    return 0;
}

