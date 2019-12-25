#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("Enter two numbers a and b to swap:");
	scanf("%d %d",&a,&b);
	printf("Before swap a=%d,b=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nAfter swap a=%d,b=%d",a,b);
	getch();
}