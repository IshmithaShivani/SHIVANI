#include<stdio.h>
int mohan(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
int main()
{
    int x[]={1,2,3,4,5,6,7,8,9,10};
    int length=sizeof(x)/sizeof(x[2]);
    mohan(x,length);
    return 0;
}
