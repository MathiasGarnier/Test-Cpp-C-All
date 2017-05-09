#include <iostream>

std::size_t binominalCoeff(std::size_t n, std::size_t k);
std::size_t fact(std::size_t x);

int main() {

	std::size_t n, k;


	std::cout << "n >> ";
	std::cin >> n;

	std::cout << std::endl << "k >> ";
	std::cin >> k;
		
	std::cout << std::endl << "(n k) = " << binominalCoeff(n, k);
	
	return 0;
}

std::size_t binominalCoeff(std::size_t n, std::size_t k) {

	if (k > n) return 0;
	else return fact(n) / (fact(k) * fact(n - k));
}

std::size_t fact(std::size_t x) {

	std::size_t tempbuff;
	
	if (x <= 1) return 1;
	
	tempbuff = x * fact(x - 1);

	return tempbuff;
}
