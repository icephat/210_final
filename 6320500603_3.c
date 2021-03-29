#include<stdio.h>
int main()
{
   int a,b,c,i,j,k,sum=0;
   scanf("%d %d %d",&a,&b,&c);
   printf("\n");

   int x[a][a],y[b][b],z[c][c];
   for(i=1;i<=a;i++)
   {
       for(j=0;j<a;j++)
       {
           x[i][j]=0;
           scanf("%d",x[j]);
           sum+=x[j];
       }

       printf("%d",sum);



   }








    return 0;
}
