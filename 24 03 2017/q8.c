#include <stdio.h>

int main() {
	printf("Escreva a matriz:\n");

	char velha[3][3];
	int i, j;
	for(i = 0; i < 3; i++)
	for(j = 0; j < 3; j++)
		scanf(" %c", &velha[i][j]);

	printf("Escreva a char que voce quer verificar: ");

	char ch;
	scanf(" %c", &ch);

	int cont;
	for(i = 0; i < 3; i++) {
		cont = 0;
		for(j = 0; j < 3; j++)
			if(velha[i][j] == ch)
				cont++;
		if(cont == 3)
			printf("Match linha %d\n", i+1);
	}

	for(i = 0; i < 3; i++) {
		cont = 0;
		for(j = 0; j < 3; j++)
			if(velha[j][i] == ch)
				cont++;
		if(cont == 3)
			printf("Match coluna %d\n", i+1);
	}	

	int cont1 = 0, cont2 = 0;
	for(i = 0; i < 3; i++) {
		if(velha[i][i] == ch)	cont1++;
		if(velha[i][2-i] == ch)	cont2++;
	}

	if(cont1 == 3)	printf("Match diagonal 1\n");
	if(cont2 == 3)	printf("Match diagonal 2\n");

	return 0;
}