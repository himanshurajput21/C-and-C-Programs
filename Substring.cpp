#include <iostream>

using namespace std;

string ini(string name) {
    string first;
    first = name.substr(1,7);
    return first;
}
int main()
{
    string n,m;
    cout << "Enter your first part of the Name: ";
    cin >> n;
    m = ini(n);
    cout << m << endl;
    return 0;

}
