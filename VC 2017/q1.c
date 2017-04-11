#include <stdio.h>

int f(int n, int k) {
	if(k == 1) {
		int pot = 1;
		while(pot <= n)
			pot *= 2;

		return pot/2;
	}

	return f(n - f(n,1), k-1);
}

int main() {
	printf("Digite n: ");
	int n;	scanf("%d", &n);

	printf("Digite k: ");
	int k; 	scanf("%d", &k);

	printf("f(%d,%d) = %d\n", n, k, f(n,k));

	return 0;
}