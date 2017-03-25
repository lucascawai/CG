#include <stdio.h>

int main() {
	printf("Escreva a linha:\n");

	char linha[41];
	scanf(" %[^\n]s", linha);

	int vogais[5] = {0, 0, 0, 0, 0};

	int i;
	for(i = 0; linha[i] != '\0'; i++) {
		if(linha[i] == 'a')	vogais[0]++;
		if(linha[i] == 'e')	vogais[1]++;
		if(linha[i] == 'i')	vogais[2]++;
		if(linha[i] == 'o')	vogais[3]++;
		if(linha[i] == 'u')	vogais[4]++;
	}

	printf("A letra 'a' aparece %d vezes\n", vogais[0]);
	printf("A letra 'e' aparece %d vezes\n", vogais[1]);
	printf("A letra 'i' aparece %d vezes\n", vogais[2]);
	printf("A letra 'o' aparece %d vezes\n", vogais[3]);
	printf("A letra 'u' aparece %d vezes\n", vogais[4]);

	return 0;
}
