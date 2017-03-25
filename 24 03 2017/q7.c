#include <stdio.h>

int main() {
	printf("Escreva a mensagem:\n");

	char mensagem[81];
	scanf(" %[^\n]s", mensagem);

	int i, j;
	for(i = 0, j = 0; mensagem[i] != '\0'; i++, j++) {
		mensagem[j] = mensagem[i];
		if(mensagem[i] == ' ')	j--;
	}
	mensagem[j] = '\0';

	for(i = 0, j = 0; mensagem[i] != '\0'; i++, j++, j %= 5)
		printf("%c", mensagem[i]+j+1);
	printf("\n");

	return 0;
}