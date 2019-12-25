#include<iostream>
using namespace std;
class xyz
{
	int num1;
	int num2;
	int hcf;
	public:
		void getdata()
		{
			cout<<"Enter two numbers (num1>num2):";
			cin>>num1>>num2;
		};
		void gcd();
		void show()
		{
			cout<<"The gcd is:"<<hcf;
		};
};
inline void xyz::gcd()
{
	int rem;
	do
	{
		rem=num1%num2;
		num1=num2;
		num2=rem;
	}while(rem!=0);
	hcf=num1;
};
int main()
{
	xyz obj;
	obj.getdata();
	obj.gcd();
	obj.show();
	return 0;
};
