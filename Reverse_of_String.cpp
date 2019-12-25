#include <iostream>
using namespace std;

int main() {
	
	int j;
	char str[100], temp;
	cout << "Enter a string to reverse: ";
	cin >> str;
	for(j=0; str[j]!='\0'; j++);
	int size = j-1;
	cout<< size <<endl;
	for(int i=0; i<=size/2; i++) {
		temp = str[i];
		str[i] = str[size-i];
		str[size-i] = temp;
		
		cout<<str[i]<<endl;
	}
	cout << str;
	return 0;
}
