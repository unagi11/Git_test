#include <iostream>

using namespace std;

void func(int&,int&);

int main(int argc, char* argv[]) {
	int a, b;
	func(a, b);
	cout << "Hello, goorm!" << endl;
	cout << "a = "<< a << ", b = "<< b << endl;
	return 0;
}

void func(int& a, int& b) {
	a = 20;
	b = 10;
}