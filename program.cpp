#include <iostream>
#include <vector>
bool func(int x) {
	for (int i = 2; i * i <= x; ++i) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;

}
std::vector<int> factors(int x) {
	std::vector<int> factors;
	for (int i = 2; i <= x; ++i) {
		if (x % i == 0 && func(i)) {
			factors.push_back(i);
		}
	}
	return factors;
}
int main() {
	std::cout << "lol papa give so ez program give hard when come to home" << "\n";
	int x;
        std::cout << "Enter Number: ";
	std::cin >> x;
	auto primeFactorlist = factors(x);
	std::cout << "The Factors And Prime Are as Followed:- ";
	for (int i : primeFactorlist) {
		std::cout << i << ',';
	}
	std::cin.get();
	return 0;
}