#include<iostream>
using namespace std;
#define max(x,y,z) (x>y?((x>z)?x:z):((y>z)?y:z))
int main()
{
	int a, b, c;
	cout<<"Enter three numbers:";
	cin>>a>>b>>c;
	int large=max(a,b,c);
	cout<<"The largest number is:"<<large;
	return 0;	
}
