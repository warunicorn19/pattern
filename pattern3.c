/*
2
34
456
5678
678910 */


#include<stdio.h>
int main()
{
int a=2,b=1,c=2;
for(int i=1;i<=5;i++)
{
    for(int j=a;j<=c;j++)
    {
        b++;
        if(b==2)
        {
            a=j;

        }
        if(a==2)
        {
            a=3;
        }
        printf("%d",j);
    }
    b=0;
    c=c+2;
    printf("\n");
}
return 0;
}