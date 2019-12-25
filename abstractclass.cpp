#include<iostream>
using namespace std;
class base
{
	public:
		virtual void getdata()=0;
		virtual void show()=0;
};
class der1:public base
{
	int num1;
	public:
		void getdata()
		{
			cout<<"Enter values of num1:";
			cin>>num1;
		}
		void show()
		{
			cout<<num1;
		}
};
int main()
{
//	base b;
	base *i;
	der1 obj;
	i=&obj;
	i->getdata();
	i->show();
	return 0;
}
