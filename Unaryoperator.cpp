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
		Complex operator-() {
			Complex temp;
			temp.a=-a;
			temp.b=-b;
			return(temp);
		}
};

int main() {
	Complex c1,c2;
	c1.setdata(8,9);
	c2=-c1;
	c2.showdata();
	return 0;
}
