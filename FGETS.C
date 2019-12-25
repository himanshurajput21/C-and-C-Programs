#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *pt;
	char str[100];
	clrscr();
	pt=fopen("f1.txt","r");
	while(fgets(str,50,pt)!=NULL)
		printf("%s",str);
	fclose(pt);
	getch();
}