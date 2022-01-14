#include <iostream>
using namespace std;
void func(int &);
int main(){
    int a = 5;
    string b = "A";
    string &c = b;
    int *x = &a;
    string *y = &b;
    void *z = x;
    cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<"\n";
    cout<<&a<<" "<<&b<<" "<<&c<<" "<<&x<<" "<<&y<<" "<<&z<<"\n";
    c = "F";
    b = c;
    cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<"\n";
    *y = "W";
    b = *y;
    cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<"\n";
    a = 6;
    cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<"\n";
	a = 7;
	cout<<a<<" "<<b<<" "<<c<<" "<<x<<" "<<y<<" "<<z<<"\n";
	return 0;
}
