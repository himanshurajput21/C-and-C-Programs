#include<iostream>
#include<string>
using namespace std;
class xyz
{
    string s;
    string city;
public:
    xyz(string str, string x="Delhi")
    {
        s=str;
        city=x;
    }
    xyz(xyz& obj)
    {
        s=obj.s;
        city=obj.city;
    }
    void show()
    {
        cout<<"Name:"<<s<<endl;
        cout<<"City:"<<city<<endl;
    }
};
int main()
{
    xyz obj1("Arya","Bhopal");
    xyz obj2("Sonu");
    xyz obj3=obj1;
    obj1.show();
    obj2.show();
    obj3.show();
    return 0;
}
