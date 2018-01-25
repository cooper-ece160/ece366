#include <iostream>
// uncomment to disable assert()
// #define NDEBUG
#include <cassert>
#include <climits>

int multiply(int a, int b) {
	return a*b;
}

int divide(int n, int d) {
	if (!d)
		return INT_MAX;
	return n/d;
}
 
int calculate(bool mode, int x, int y) {
	if (mode) {
		return multiply(x,y);
	}
	return divide(y, x);
}
 
 
int main()
{
	// Unit tests for multiply
    assert(multiply(2, 2)==4);
    std::cout << "Case 1 OK\n";
	
	// Unit tests for divide
	assert(divide(4, 2)==2);
    std::cout << "Case 2 OK\n";
	assert(divide(4,0)==INT_MAX);
	std::cout << "Case 3 OK\n";
	
	// Integration test
	assert(calculate(false, 6, 3)==0);
	std::cout << "Case 4 OK\n";
	
}