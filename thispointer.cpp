#include<iostream>
using namespace std;
class abc
{
		int x;
	public:
		void set(int x)
		{
			this->x=x;
		}
		void show()
		{
			cout<<"The address of object is:"<<this<<endl;
			cout<<"The value of data member x is:"<<x;
		}
};
int main()
{
	int y=90;
	abc a;
	a.set(y);
	a.show();
	return 0;
}
