#include <stdio.h>

int main() {
	printf("Escreva a mensagem:\n");

	char mensagem[81];
	scanf(" %[^\n]s", mensagem);

	int i;
	for(i = 0; mensagem[i] != '\0'; i++)
		if(mensagem[i] != ' ')
			printf("%c", mensagem[i]);
	printf("\n");

	return 0;
}