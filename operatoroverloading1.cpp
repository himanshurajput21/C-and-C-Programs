#include <iostream>
using namespace std;

class Complex {
	private:
		int a,b;
	public:
		void setData(int x, int y) {
			a=x; b=y;
		}
		void display() {
			cout<<"a= " <<a<<" b= "<<b;
		}
		Complex operator +(Complex c) {
			Complex temp;
			temp.a = a + c.a;
			temp.b = b + c.b;
			return(temp);
		}
		
};

int main(){
	
	Complex c1, c2, c3;
	c1.setData(3,4);
	c2.setData(5,6);
	c3 = c1+c2;
	c3.display();
	return 0;
}
