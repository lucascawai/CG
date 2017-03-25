#include <stdio.h>

int main() {
	printf("Escreva a linha:\n");

	char linha[80];
	scanf(" %[^\n]s", linha);

	printf("Escreva o caractere desejado: ");

	char ch;
	scanf(" %c", &ch);

	int vezes = 0, i;
	for(i = 0; linha[i] != '\0'; i++)
		if(linha[i] == ch)
			vezes++; // vezes = vezes + 1;

	printf("Qnt de vezes q o char \'%c\' aparece %d vezes\n", ch, vezes);

	return 0;
}