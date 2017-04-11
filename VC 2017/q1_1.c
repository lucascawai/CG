#include <stdio.h>

int main() {
	printf("Digite n: ");
	int n;	scanf("%d", &n);

	printf("Digite k: ");
	int k; 	scanf("%d", &k);

	int pot;
	while(k >= 1) {
		pot = 1;
		while(pot <= n)
			pot = pot * 2;
		pot  = pot / 2;

		if(k == 1) break;

		n = n - pot;
		k = k - 1;
	}

	printf("%d\n", pot);

	return 0;
}