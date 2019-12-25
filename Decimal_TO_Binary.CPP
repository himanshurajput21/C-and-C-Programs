#include<stdio.h>
int main()
{
	int num,rem,quo,k,n=0,r,number=0,er=1,q;
	printf("Enter the number in decimal:");
	scanf("%d",&num);
	if(num==0)
        printf("Binary is:%d",num);
	quo=num;
	q=num;
	if(q%2==0)
	{
		while(q%2!=1)
		{
			q=q/2;
			er=er*10;
		}
	}
	while(quo>0)
	{
		rem=quo%2;
		n=10*n+rem;
		quo=quo/2;
	}
	printf("The number in binary is:");
	while(n>0)
	{
		r=n%2;
		number=10*number+r;
		n=n/10;
	}
	printf("%d",number*er);
}
