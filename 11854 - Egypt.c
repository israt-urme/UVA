#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,d1,d2;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        if(a==0 && b==0 && c==0)
            break;
        if(a<c && b<c){
            d=(a*a+b*b);
            if(d==c*c)
                printf("right\n");
            else
            printf("wrong\n");
        }
        else if(a<b && c<b){
            d1=(a*a+c*c);
            if(d1==b*b)
                printf("right\n");
            else
            printf("wrong\n");
        }
        else if(b<a && c<a){
            d2=(b*b+c*c);
            if(d2==a*a)
                printf("right\n");
            else
            printf("wrong\n");
        }
        else
            printf("wrong\n");

    }
    return 0;
}
