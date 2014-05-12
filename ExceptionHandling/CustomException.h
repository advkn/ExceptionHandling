//Custom exception class
#include <iostream>
#include <string>
using namespace std;

class MyException {

private:
	string iStr;

public:

	MyException(string aStr) {
		iStr = aStr;
	}

	void Print() {
		cout << iStr << endl;
	}

};