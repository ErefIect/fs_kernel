#include <iostream>
#include <algorithm>
using namespace std;

// O(n)=sqrt(n)
bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i < n / i; i++)
		if (n % i == 0) return false;	
	return true;
}

int main() {
	int n;
	cin >> n;
	cout << isPrime(n);
	return 0;
}



