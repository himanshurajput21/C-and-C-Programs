#include<iostream>
#include<string>
using namespace std;
class xyz
{
	private:
		string name;
		int age;
	public:
		xyz(string a="XXXXX", int b=0)
		{
			name=a;
			age=b;
		}
		xyz(xyz &obj)
		{
			name=obj.name;
			age=obj.age;
		}
		void show()
		{
			cout<<"Name is:"<<name<<endl;
			cout<<"Age is:"<<age<<endl;
		}
};
int main()
{
	xyz stu1;
	xyz stu2("Jon Snow",20);
	xyz stu4(stu2);
	xyz stu3("Kate");
	stu1.show();
	stu2.show();
	stu3.show();
	stu4.show();
	return 0;
}

