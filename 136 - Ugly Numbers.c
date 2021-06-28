#include<stdio.h>
int main()
{
    long long i,sum=0;
    for(i=1;;i++)
    {
        if(i==1){
            sum++;
        }
        if((i%2==0 || i%3==0 || i%5==0)){
            sum++;
            if(sum==150)
                break;
        }
    }
    printf("The 1500'th ugly number is %d.\n",i);
    return 0;
}
