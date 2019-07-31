#include<stdio.h>
int main()
{
    int a=5;
    for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=7;j++)
        {
            if((j==1)||(j==a))
            {printf("*");
            
            }
            else 
            {
                printf(" ");
            }
        
        }
        if(i<4)
        {
            a--;
        }
        else
        {
            a++;
        }
        for(int c=1;c<=2;c++)
        {
            for(int k=1;k<=2;k++)
            {
                printf(" ");
            }
            for(int l=1;l<=7;l++)
            {
                if(i==1||l==4||i==7)
                printf("*");
                else
                printf(" ");
            }
        }
        for(int m=1;m<=7;m++)
        {
            if(i==1||m==4)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");

    }
    return 0;
}