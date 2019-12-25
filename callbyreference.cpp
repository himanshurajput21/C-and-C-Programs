#include <iostream>
using namespace std;



main() {

	int value = 5;
	int const *pvalue = &value;
	int number = 11;
	
	cout<<*pvalue;
	
}
