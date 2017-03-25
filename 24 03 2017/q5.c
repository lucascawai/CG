#include <stdio.h>

int main() {
	printf("Escreva a mensagem:\n");

	char mensagem[81];
	scanf(" %[^\n]s", mensagem);

	int i;
	for(i = 0; mensagem[i] != '\0'; i++)
		if((mensagem[i] >= 'a' && mensagem[i] <= 'y') || 
			(mensagem[i] >= 'A' && mensagem[i] <= 'Y'))
			mensagem[i]++;
		else if(mensagem[i] == 'z')	mensagem[i] = 'a';
		else if(mensagem[i] == 'Z')	mensagem[i] = 'A';

	printf("A mensagem fica:\n%s\n", mensagem);

	return 0;
}