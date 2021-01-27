#include <iostream>

using namespace std;

void Hitung (int a, int b) { 
	cout << a << "+" << b << "=" << a + b << endl;
	cout << a << "-" << b << "=" << a - b << endl;
	cout << a << "x" << b << "=" << a * b << endl;
	cout << a << ":" << b << "=" << a / b << endl;
}

int main() { 

	int a,b; 

	cout << "Masukkan Nilai A :"; 
	cin >> a;

	cout << "Masukkan Nilai B :"; 
	cin >> b;

	Hitung (a,b); 

	return 0;
}