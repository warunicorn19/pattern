#include<stdio.h>
int main()
{

 int i,s,k=0,c=0,c1=0;
 for(i=1;i<=5;i++)
 {
     for(s=1;s<=5-i;s++)
     {
         printf(" ");
         c++;
     }
     while(k!=2*i-1)
     {
         if(c<=5-1)
         {
             printf("%d",i+k);
             c++;
         }
         else
         {
             ++c1;
             printf("%d",(i+k-2*c1));

         }
         k++;
        
     }
     c1=c=c=k=0;
     printf("\n");
 }
return 0;

}