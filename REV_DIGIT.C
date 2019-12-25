#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100],ch[100];
	int l,i;
	clrscr();
	printf("Enter a digit:");
	scanf("%s",str);
	for(l=0;str[l]!='\0';l++);
	printf("l:%d",l);
	for(i=0;i<l/2;i++) {
		ch[i]=str[i];
		str[i]=str[l-1-i];
		str[l-1-i]=ch[i];
	}
	printf("\nReverse digit is:%s",str);
	getch();
}