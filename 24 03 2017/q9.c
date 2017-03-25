#include <stdio.h>
#include <ctype.h>

int main() {
	printf("Escreva uma mensagem:\n");

	char mensagem[80];
	scanf(" %[^\n]s", mensagem);

	int i;
	for(i = 1; mensagem[i] != '\0'; i++) {
		if(mensagem[i-1] == ' ')
			if(islower(mensagem[i])) // if( mensagem[i] >= 'a' && mensagem[i] <= 'z' )
				mensagem[i] += 'A' - 'a';
	}
	if(islower(mensagem[0])) // if( mensagem[i] >= 'a' && mensagem[i] <= 'z' )
		mensagem[0] += 'A' - 'a';

	printf("%s\n", mensagem);
	
	return 0;
}