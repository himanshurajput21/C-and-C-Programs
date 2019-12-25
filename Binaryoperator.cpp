#include<iostream>
using namespace std;
class Complex {
	private:
		int a,b;
	public:
		void setdata (int x, int y) {
			a=x;
			b=y;
		}
		void showdata() {
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
		Complex operator+(Complex c) {
			Complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return(temp);
		}
};

int main() {
	Complex c1,c2,c3;
	c1.setdata(1,2);
	c2.setdata(4,5);
	c3=c1+c2;
	c3.showdata();
	return 0;
}
