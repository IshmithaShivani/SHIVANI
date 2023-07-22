#include<stdio.h>
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    int i,j;
     for(i=1;i<=n;i++)
     {
         for(j=1;j<i+1;j++)
     {
         printf("%d",i);
     }
     printf("\n");
}
}
