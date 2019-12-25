#include<stdio.h>
int main()
{
	int num1, num2, t, i;
	printf("Loop variable:");
	scanf("%d", &t);
	for(i=0; i<t; i++) {
		printf("Enter two numbers:");
		scanf("%d%d", &num1, &num2);
		num1=reverse(num1);
		num2=reverse(num2);
		printf("Reverse of the reverse addition of numbers is:%d\n", reverse(add(num1, num2)));
	}
	return 0;
}

int reverse(int num) {
	int res=0, i=1, rem;
	while(num!=0){
		rem=num%10;
		res=res*10+rem;
		num/=10;
	}
	return(res);
}

int add(int a, int b) {
	return a+b;
}
