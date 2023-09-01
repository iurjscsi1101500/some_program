#include <iostream>
#include <vector>
typedef unsigned long ulong;
bool func(ulong x) {
	for (int i = 2; i * i <= x; ++i) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;

}
std::vector<ulong> factors(ulong x) {
	std::vector<ulong> factors;
	for (ulong i = 2; i <= x; ++i) {
		if (x % i == 0 && func(i)) {
			factors.push_back(i);
		}
	}
	return factors;
}
int main() {
	ulong x;
	std::cout << "Enter Number: ";
	std::cin >> x;
	auto primeFactorlist = factors(x);
	std::cout << "The Factors And Prime Are as Followed:- ";
	for (ulong i : primeFactorlist) {
		std::cout << i << ',';
	}
	std::cin.get();
	return 0;
}