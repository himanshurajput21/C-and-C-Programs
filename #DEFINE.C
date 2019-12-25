#include<stdio.h>
#include<conio.h>
#define LIMIT 10
#define TOP LIMIT+1
#define NAME "Anyone"
void main()
{
	int i;
	clrscr();
	for(i=1; i<=TOP; i++) {
	printf("%d\n", i );
	}
	printf(NAME);
	getch();
}
