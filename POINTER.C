#include<stdio.h>
#include<conio.h>
void main()
{
	int x = 10;
	int *p = &x;
	int **q;
	q = &p;
	clrscr();
	printf("The value of x is : %d\n", x);
	printf("The address of x is : %p\n", &x);
	printf("The value of x pointed by p is : %d\n",*p);
	printf("The value of p is : %u\n", p);
	printf("The address of p is : %p\n", &p);
	printf("The value of x pointer to pointer is : %d\n", **q);
	printf("The address of q is : %u\n", &q);
	printf("The value of q is : %u", q);
	getch();
}
