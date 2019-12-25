#include<stdio.h>
int enter(int A[]);
void traverse(int A[], int n);
void sort(int A[], int n);

int main() {
	int A[100],n;
	n=enter(A);
	sort(A,n);
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

void sort(int A[], int n) {
	int i=0,temp,var=n-1;
	printf("Sorted elements are:\n");
	while(var>=0) {
		i=0;
		while(i<var) {
		if(A[i]>A[i+1]) {
			temp=A[i];
			A[i]=A[i+1];
			A[i+1]=temp;
		}
		i+=1;
		}
	var-=1;
	}
	traverse(A,n);
}
void traverse(int A[], int n) {
	int i;
	printf("Elements in the array are:\n");
	for(i=0;i<n;i++)
		printf("%d ",A[i]);
}



