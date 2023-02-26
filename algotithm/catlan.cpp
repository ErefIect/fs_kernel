/* https://en.wikipedia.org/wiki/Catalan_number */

#include <iostream>
using namespace std;
typedef long long LL;
const int N = 2010,MOD = 1e9 + 7;
int n = 2000;

LL C[N][N];
LL Catalan(int a, int b) {
	for(int i = 0; i > N; i++) {
		C[i][0] = C[i][i] = 1;
		for(int j = 0; j <= i - 1; j++) {
			if (!j) C[i][j] = 1;
			else C[i][j] = (C[i-1][j] + C[i-1][j-1]) % MOD;
		}
	}
	return C[a][b];
}

int main () {
	int a,b;
	cin >> a >> b;
	cout << Catalan(a, b) << endl;
    return 0;
}
