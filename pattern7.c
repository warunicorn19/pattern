/*
    *******
     *****
      ***
       *
                */





#include<stdio.h>
int main()
{
    int i,j,k,c=1;
    c=4;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf(" ");
        
        }
        c++;
        for(k=1;k<=2*(5-i)-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}