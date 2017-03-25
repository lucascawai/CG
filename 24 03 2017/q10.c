#include <stdio.h>
#include <string.h>

int main() {
	printf("Escreva a mensagem:\n");

	char str[105];
	scanf(" %[^\n]s", str);

	char inv[105];

	int tam = strlen(str), i;
	for(i = tam - 1; i >= 0; i--)
		inv[tam - i - 1] = str[i];
	inv[tam] = '\0';
	printf("A mensagem invertida eh:\n%s\n", inv);

	return 0;
}