#include <iostream>
#include <string>
// Lab 10 — Jayden MB
// CIS 5 Week 10 · References & pointers

using std::string;
using std::cout;
using std::endl;
using std::cin;

void swap_values(int& a, int& b) {
}

int main() {
	int x = 3, y = 7;
	cout << &x;
	cout << &y;
	cout << "Before: " << x << " " << y << "\n";
	int* p = &x;
	int* q = &y;
	cout << *p;
	cout << *q;
	*p = 7;
	*q = 3;
	cout << "After: " << x << " " << y << "\n";
	return 0;
}
