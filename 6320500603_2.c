#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n],i,min;
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
        }
    }
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("%d %d",min,max);

    return 0;
}
