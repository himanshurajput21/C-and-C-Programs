#include <iostream>
using namespace std;

class Animal {
	private:
		string name;
	public:
		Animal() {
			cout<<"Animal Created..."<<endl;
		}
		~Animal() {
			cout<<"Destructor Called..."<<endl;
		}
		void setName(char name) {
			this->name = name;
		}
		
		void display() {
			cout<<name<<endl;
		}
};

main() {
	char c = 'a';
	Animal *p = new Animal[26];
	for(int i=0; i<=25; i++) {
		p[i].setName(c);
		c++;
	}
	for(int i=0; i<=25; i++) {
		p[i].display();
	}

//	int number = 15;
//	int *p = &number;
//	if(p == &p[0])
//		cout << *p;

	return 0;
}
