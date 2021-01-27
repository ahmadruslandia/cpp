#include <iostream>

using namespace std;

int main() {

	int i;

	cout << "Pilih salah satu angka di bawah ini" << endl;
	cout << "1. Contoh If" << endl;
	cout << "2. Contoh If Else" << endl;
	cout << "Masukkan angka 1 dan 2 untuk contoh Else" << endl;
	cout << "Masukkan angka disini: ";
	cin >> i;

	if (i == 1) {
		cout << "Ini adalah contoh If" << endl;
	}

	else if (i == 2) {
		cout << "Ini adalah contoh If Else" << endl;
	}

	else {
		cout << "Ini adalah contoh Else" << endl;
	}

	return 0;

}