#include<stdio.h>
int enter(int A[]);
void traverse(int A[], int n);

int main() {
	int A[100],n;
	n=enter(A);
	traverse(A,n);
}

int enter(int A[]) {
	int i,n;
	printf("How many elements you want to enter:");
	scanf("%d",&n);
	printf("Enter the elements in the array:\n");
	for(i=0;i<n;i++) {
		scanf("%d", &A[i]);
	}
	return n;
	
}

void traverse(int A[], int n) {
	int i;
	printf("Elements in the array are:\n");
	for(i=0;i<n;i++)
		printf("%d ",A[i]);
}


