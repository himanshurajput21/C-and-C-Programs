#include<iostream>
#include<cmath>
using namespace std;
class base
{
	bool arr[1000];
	public:
		void f(int);
		void show(int);
};
void base::f(int n)
{
	int i, j;
	for(i=2; i<=n; i++)
		arr[i]=true;
	for(i=2; i<=sqrt(n); i++)
	{
		for(j=2*i; j<=n; j=j+i)
			arr[j]=false;
	}
}
void base::show(int n)
{
	cout<<"The prime numbers are:\n";
	for(int i=2; i<=n; i++)
	{
		if(arr[i])
			cout<<i<<" ";
	}
}
int main()
{
	base b;
	int terms;
	cout<<"Enter the number upto which all the p"
	            <<"rimes are to be find:";
	cin>>terms;
	b.f(terms);
	b.show(terms);
	return 0;
}
