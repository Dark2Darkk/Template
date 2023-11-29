// Colton Coey
// CIS 1202 501
// November 29, 2023

#include<iostream>
#include<cmath>

using namespace std;

template <typename T>
T half(T value) {
	return value / 2;
}

template <>
int half(int value) {
	return static_cast<int>(round(value / 2.0));
}

int main() {
	double a = 7.0;
	float b = 5.0f;
	int c = 3;
	
	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
	
	return 0;
}