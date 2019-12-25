#include<iostream>
#include<string>
using namespace std;
class xyz
{
    string a;
    string b;
public:
    void getdata();
    void swapping();
    void show();
};
void xyz::getdata()
{
    cout<<"Enter two string a and b:\n";
    getline(cin,a);
    getline(cin,b);
}
void xyz::swapping()
{
    string temp;
    temp=a;
    a=b;
    b=temp;
}
void xyz::show()
{
    cout<<"After swapping:\n";
    cout<<"a="<<a<<"\n"<<"b="<<b;
}
int main()
{
    xyz obj;
    obj.getdata();
    obj.swapping();
    obj.show();
    return 0;
}
