
//STACK IMPLEMENTATION USING ARRAY
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int stack[MAX];
int top=-1;
void push(int);
int pop();
int peek();
void display();

void main()
{
	
	int val, option;
	
	do{
		printf("\n*****MAIN MENU*****");
		printf("\n1. PUSH");
		printf("\n2. POP");
		printf("\n3. PEEK");
		printf("\n4. DISPLAY");
		printf("\n5. EXIT");
		
		printf("\nEnter an option:");
		scanf("%d", &option);
		
		switch(option)
		{
			case 1: printf("Enter value to be inserted in stack:");
					scanf("%d", &val);
					push(val);
					
					break;
			
			case 2: pop();
					break;
			
			case 3: peek();
					break;
			case 4: printf("Elements in stack are:");
					display();
					break;
			case 5: exit(0);
					break;
			default: printf("Incorrect Option");
					break;
		}
	}while(option!=5);
	
}

void push(int val) {
	if(top==MAX-1){
		printf("OVERFLOW");
	}
	else {
		top++;
		stack[top]=val;
	}
	
}

int pop() {
	int pop_value;
	if(top==-1)
		printf("UNDERFLOW");
	else {
		printf("Popped value is %d", stack[top]);
		top--;
	}
}

int peek() {
	if(top==-1)
		printf("No peeking");
	else {
		printf("Peeking in stack we have %d", stack[top]);
	}
} 

void display() {
	int random;
	if(top==-1) {
		printf("Empty Stack");
	}
	else {
		for(random = 0;random!=top+1;random++) {
			printf("%d ", stack[random]);
		}
	}
}
