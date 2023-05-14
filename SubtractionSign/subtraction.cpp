#include "subtraction.h"

string subtraction(int a, int b) {
	string c;
	if (a - b >= 0) {
		return "POSITIVE";
	}
	else return "NEGATIVE";
}
