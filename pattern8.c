/* 
     *
    *A*
   *A*A*
  *A*A*A*
 *A*A*A*A* */

#include<stdio.h>
int main()
{
    int c,k,space,count=1;
    space=5;
    for(c=1;c<=5;c++)
    {
        for(k=1;k<=space;k++)
        printf(" ");

        for(k=1;k<=c;k++)

    {
        printf("*");
        if(c>1 && count<c)
        {
            printf("A");
            count++;
        }
    }
printf("\n");
space--;
count=1;


    }
    return 0;
}