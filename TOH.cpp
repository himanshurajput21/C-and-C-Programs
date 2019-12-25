#include<iostream>
using namespace std;

void toh(int n, char A, char B, char C);

int main() {
	
	int n;
	cout<<"Enter number to discs:";
	cin>>n;
	toh(n, 'A', 'B', 'C');
}

void toh(int n, char A, char B, char C) {
	if(n==1) {
		cout << "Move disc from "<< A <<" to " << B << endl;
	}
	else {
		toh(n-1, A, C, B);
		toh(1, A, B, C);
		toh(n-1, C, B, A);
	}
}
