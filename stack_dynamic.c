#include<stdio.h>

struct stack {
	int data;
	struct stack *next;
};

struct stack *top=NULL;
void push(int element, struct stack *);
int pop();
void display();
void peek();

void main() {
	
	int element, choice;
	
	do {
		
		printf("****MENU****");
		printf("\n1. PUSH");
		printf("\n2. POP");
		printf("\n3. PEEK");
		printf("\n4. DISPLAY");
		printf("\n5. EXIT");
		printf("\n\nEnter your choice:");
		scanf("%d", &choice);
		switch(choice) {
			
			case 1: printf("Enter element you want to push:");
					scanf("%d", &element);
					push(element, top);
					break;
			
			case 2: printf("The popped value is:%d", pop());
					break;
		}
		
	}while(choice!=5);
}

void push(int element, struct stack *top) {
	struct stack *ptr;
	ptr=malloc(sizeof(struct stack));
	ptr->data=element;
	if(top==NULL) {
		
		ptr->next=NULL;
		top=ptr;

	}
	else {
		
		ptr->next=top;
		top=ptr;
	}
}

int pop() {
	int val;
	struct stack *ptr;
	ptr=top;
	val=top->data;
	top=top->next;
	free(ptr);
	return val;
}
