#include <iostream>
#include <sstream>
using namespace std;

class Animal {
	private:
		string name;
		int age;
	public:
		
		Animal():name("Dog"), age(12) {
		}
		
		Animal(string name, int age):name(name), age(age) {
		}
		
		string getName() {
			return name;
		}
		
		void setName(string name) {
			this->name = name;
		}
		
		int getAge() {
			return age;
		}
		
		void setAge(int age) {
			this->age = age;
		}
		
		void showName() {
			cout<<"Name is: " <<name << endl;
		}
		
		void showAge() {
			cout << "Age is: " << age << endl;
		}		

//		Animal operator+(Animal a) {
//			Animal temp;
//			stringstream ss;
//			string combine;
//			ss<<getName()<<" and "<<a.getName();
//			combine = ss.str();
//			temp.name = combine;
//			return(temp);
//		}
		
//		Animal operator+() {
//		Animal temp;
//		stringstream ss;
//		string combine;
//		ss<< "GOOD " << name;
//		combine = ss.str();
//		temp.name = combine;
//		return(temp);
//		} 
		
		Animal operator+() {
			Animal temp;
			temp.age=+age;
			return(temp);
		}
		
		Animal operator-() {
			Animal temp;
			temp.age=-age;
			return(temp);
		}
		
		Animal operator++() {
			Animal temp;
			temp.age = ++age;
			return temp;
		}
		
		Animal operator++(int) {
			Animal temp;
			temp.age = age++;
			return temp;
		}
		
		Animal operator--() {
			Animal temp;
			temp.age = --age;
			return temp;
		}
		
		Animal operator--(int) {
			Animal temp;
			temp.age = age--;
			return temp;
		}
};

int main() {
	
	Animal a1, a2("Cat", 19), a3("Donkey", 25), a4("Buffalo", 84), a5, a6;
//	a3 = a1 + a2;
	a1 =+a1;  // a1.operator+();
	a1.showAge();
	a2 =-a2;
	a2.showAge();
	a3 =++a3;
	a3.showAge();
	a4 =a3++;
	a4.showAge();
	a5 =a1++;
	a5.showAge();
	a6 =a1++;
	a6.showAge();
	cout << endl;
	a1.showAge();
	a2.showAge();
	a3.showAge();
	a4.showAge();
	a5.showAge();
	a6.showAge();
	
	return 0;	
		
}
