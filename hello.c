#include <stdio.h>
#define max(a, b) {(a) > (b) ? (a) : (b)}

int main() {
	int a, b;
	max(a++, b++);
}
