#include<stdio.h>
#include<conio.h>

#define CHECK(number,numb)  if(number>=numb) { \
			printf("Number %d is larger than %d",number,numb); \
			}  \
			else {     \
			printf("Number %d is smaller than %d",number,numb); \
			}

void main()
{
	int num,num1;
	clrscr();
	printf("Enter the first value of number: ");
	scanf("%d",&num);
	printf("Enter the second value of number: ");
	scanf("%d",&num1);
	CHECK(num,num1);
	getch();
}
