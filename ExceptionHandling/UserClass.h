//Custom class
#include "CustomException.h"

class MyObject {
private:
	int iA, iB;

public:
	MyObject(int aa, int bb) {
		iA = aa;
		iB = bb;

		if((iA <= 0) || (iB <= 0)) {
			throw MyException("Invalid args. Requires positive numbers.");
		}
	}

};