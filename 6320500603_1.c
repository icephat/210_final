#include<stdio.h>
int main()
{
    int n,c,i,a,sum=0,s,k=0,b;
    scanf("%d %d",&n,&c);

    if(n>0&&n<32750)
    {
        a=n%10;
        if(a<5)
        {
            n=n-a;
        }
        else if(a>4)
        {
            b=10-a;
            n=n+b;
        }
        k=n+c;
        printf("%d",k);
    }





    return 0;
}
