#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

     if(n==2)
     {
        int a[n],i,l=0,min,k=0,x=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int max=a[0];
        for(i=1;i<n;i++)
        {
            if(max<a[i])
            {
                max=a[i];
                x=i;
                l++;
            }
        }
        if(l==0)
        {
            printf("%d %d",l+1,max);
        }
        else
        {
            printf("%d",max);
        }

    }
    if(n>2&&n<=1000)
    {
        int a[n],i,l=0,min,k=0,x=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int max=a[0];
        min=a[0];
        for(i=1;i<n;i++)
        {
            if(max<a[i])
            {
                max=a[i];
                x=i;
                l++;
            }
            else if(min>a[i])
            {
                min=a[i];
            }
            if(max==a[i+1])
            {
                k++;
            }

        }
        if(k>0)
        {
            printf("%d %d",l+1,max);
        }
        else
        {
            printf("%d",x+1);
        }
    }



    return 0;
}
