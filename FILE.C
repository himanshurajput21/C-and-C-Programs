#include<stdio.h>
#include<conio.h>
main()
{
	FILE *pt;
	char str[100],ch[100];
	clrscr();
	pt=fopen("f1.txt","a");
	printf("Enter a string:");
	gets(str);
	fprintf(pt,"%s",str);
	fclose(pt);
	pt=fopen("f1.txt","r");
	fscanf(pt,"%s",ch);
	puts(ch);
	fclose(pt);
	getch();
	return(0);
}