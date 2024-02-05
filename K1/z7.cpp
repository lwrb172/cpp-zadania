#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

double seq(unsigned int n) {
	if(n == 0) return 0;
	if(n == 1) return 1;
	double a = 0, b = 1, c;
	for(int i{2}; i <= n; ++i) {
		c = b * sqrt(a);
		a = b;
		b = c;
	}
	
	return c;
}


int main() {
	srand(time(0));
	unsigned int n = rand() % 101;
	
	std::cout << n << std::endl;	
	std::cout << seq(n) << std::endl;

	return 0;
}
