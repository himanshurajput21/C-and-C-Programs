#include<stdio.h>
#include<malloc.h>
struct Polynomial {
	float COEFF;
	int EXP;
	struct Polynomial *LINK;
};

struct Polynomial *EnterPolynomial() {
	float COEFF;
	int n, EXP;
	struct Polynomial *PHEADER=NULL, *ptr=NULL, *newnode=NULL;
	printf("How many terms of polynomial you want to enter:");
	scanf("%d", &n);
	if(n<=0)
		return;
	PHEADER = (struct Polynomial*)malloc(sizeof(struct Polynomial));
	if(PHEADER==NULL)
			printf("Insufficient Memory");
	else {
		ptr=PHEADER;
		printf("Enter the terms of polynomial:\n");
		printf("Enter COEFFICIENT, EXPONENT of polynomial:\n");
		while(n!=0) {
			newnode=(struct Polynomial*)malloc(sizeof(struct Polynomial));
			if(newnode==NULL) {
				printf("Insufficient Memory");
				break;
			}
			else {
				scanf("%f %d", &COEFF, &EXP);
				newnode->COEFF=COEFF;
				newnode->EXP=EXP;
				newnode->LINK=NULL;
				ptr->LINK=newnode;
				ptr=ptr->LINK;
				n--;
			}
			
		}
		printf("\n\n");
		return(PHEADER);
	}
}

struct Polynomial *Poly_Multiply(struct Polynomial *PHEADER, struct Polynomial *QHEADER) {
	struct Polynomial *Pptr, *Qptr, *RHEADER=NULL, *Rptr=NULL, *Rptr1=NULL, *newnode=NULL;
	float COEFF;
	int EXP,n=0;
	Pptr=PHEADER->LINK;
	
	
	if(Pptr==NULL || Qptr==NULL)
		printf("Multiplication not possible.");
	else {
		RHEADER=(struct Polynomial *)malloc(sizeof(struct Polynomial));
		RHEADER->COEFF=0;
		RHEADER->EXP=0;
		RHEADER->LINK=NULL;
		
		
		while(Pptr!=NULL) {
			Qptr=QHEADER->LINK;
			while(Qptr!=NULL) {
				
				COEFF=Pptr->COEFF*Qptr->COEFF;
				EXP=Pptr->EXP+Qptr->EXP;
			
				Rptr1=Rptr=RHEADER;
				Rptr=Rptr->LINK;
				if(n==0) {
					newnode=(struct Polynomial *)malloc(sizeof(struct Polynomial));
					newnode->COEFF=COEFF;
					newnode->EXP=EXP;
					Rptr1->LINK=newnode;
					newnode->LINK=NULL;
					n++;
				}
				else {
					while(Rptr!=NULL && Rptr->EXP>=EXP) {
					Rptr1=Rptr;
					Rptr=Rptr->LINK;
					}
				
					if(Rptr1->EXP==EXP) {
						Rptr1->COEFF=Rptr1->COEFF+COEFF;
					}
					else {
						newnode=(struct Polynomial *)malloc(sizeof(struct Polynomial));
						newnode->COEFF=COEFF;
						newnode->EXP=EXP;
						if(Rptr==NULL) {
							newnode->LINK=NULL;
							Rptr1->LINK=newnode;
						}
						else {
							newnode->LINK=Rptr;
							Rptr1->LINK=newnode;
						}
					}
				}
				
				Qptr=Qptr->LINK;
			}
			Pptr=Pptr->LINK;
		}
	}
	return(RHEADER);
	
}

void Traverse(struct Polynomial *PHEADER) {
	struct Polynomial *ptr;
	ptr=PHEADER;
	ptr=ptr->LINK;
	while(ptr!=NULL) {
		printf("COEFF: %f, EXP: %d\n", ptr->COEFF, ptr->EXP);
		ptr=ptr->LINK;
	}
	printf("\n\n\n");
	free(ptr);
}		
	
void main() {
	struct Polynomial *PHEADER, *QHEADER, *RHEADER;
	PHEADER = EnterPolynomial();
	QHEADER = EnterPolynomial();
	RHEADER = Poly_Multiply(PHEADER, QHEADER);
	Traverse(PHEADER);
	Traverse(QHEADER);
	Traverse(RHEADER);
}
