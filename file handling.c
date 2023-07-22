#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("filename.doc","w+");
    while(ch!=EOF)
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
}
