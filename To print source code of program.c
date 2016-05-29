#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("To print source code of program.c","r+");
	while((ch=getc(fp))!=EOF)
		printf("%c",ch);
}
