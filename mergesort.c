#include <stdio.h>

void mergesort(int A[], int i, int j);
void merge(int A[], int i, int j);

int main() {
	
	int A[100], n, i;
	printf("Enter no. of elements to sort: ");
	scanf("%d", &n);
	printf("Enter elements: ");
	for(i=0; i<n; i++) {
		scanf("%d", &A[i]);
	}
	
	//MERGE SORT
	mergesort(A, 0, i-1);
	
	//PRINTING SORTED NUMBERS
	printf("Sorted numbers are: ");
	for(i=0; i<n; i++) {
		printf("%d ", A[i]);
	}
	
}

void mergesort(int A[], int i, int j) {
	
	int mid = (i+j)/2;
	if(i==j) 
		return;
	mergesort(A, i, mid);
	mergesort(A, mid+1, j);
	merge(A, i, j);
}

void merge(int A[], int i, int j) {
	
	int B[100], l, m, mid, k;
	l=m=i;
	mid = (i+j)/2;
	k = mid + 1;
	
	while(i<=mid && k<=j) {
		if(A[i] <= A[k]) {
			B[l++] = A[i++];
		}
		else {
			B[l++] = A[k++];
		}
	}
	
	if(i>mid) {
		for(;k<=j;) {
			B[l++] = A[k++];
		}
	}
	else {
		for(;i<=mid;) {
			B[l++] = A[i++];
		}
	}
	
	for(;m<=j;m++) {
		A[m] = B[m];
	}
}
