/*
0
00
010
0010
01210
000210 */
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i%j);

        }
         printf("\n");
    }
   return 0;

}