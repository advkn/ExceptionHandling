
#include "UserClass.h"

void main() {

	cout << "Enter 2 numbers: " << endl;

	int arg1, arg2;

	cin >> arg1 >> arg2;
	
	try {
		MyObject obj(arg1, arg2);	
	}
	catch(MyException& e) {
		e.Print();
		return;
	}

	getchar();

	cout << "Ok" << endl;

	getchar();
}