#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            printf(" ");

        }
        for(j=2;j<=i*2;j+=2)
        {
            
            printf("%d",j);
        }
        for(j=(i-1)*2;j>=2;j-=2)
        {
            printf("%d",j);

        }
        printf("\n");
    }
    return 0;
}