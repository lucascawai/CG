#include <stdio.h>

int main() {
	int a[3][3], b[3][3];

	printf("Escreva a matriz A:\n");

	int i, j;
	for(i = 0; i < 3; i++)
	for(j = 0; j < 3; j++)
		scanf("%d", &a[i][j]);
	
	printf("Escreva a matriz B:\n");

	for(i = 0; i < 3; i++)
	for(j = 0; j < 3; j++)
		scanf("%d", &b[i][j]);

	printf("Qual operacao voce deseja realizar?\n");
	printf("1 - soma\n");
	printf("2 - subtracao\n");
	printf("3 - multiplicacao\n");

	int op;
	scanf("%d", &op);

	int c[3][3];
	switch(op) {
		case 1:
			for(i = 0; i < 3; i++)
			for(j = 0; j < 3; j++)
				c[i][j] = a[i][j] + b[i][j];

			printf("A soma das 2 matrizes eh:\n");
			for(i = 0; i < 3; i++)
			for(j = 0; j < 3; j++)
				printf("%d%c", c[i][j], j == 2 ? '\n' : ' ')
			
			break;

		case 2: 
			for(i = 0; i < 3; i++)
			for(j = 0; j < 3; j++)
				c[i][j] = a[i][j] - b[i][j];

			printf("A subtracao das 2 matrizes eh:\n");
			for(i = 0; i < 3; i++)
			for(j = 0; j < 3; j++)
				printf("%d%c", c[i][j], j == 2 ? '\n' : ' ');

			break;

		case 3:
			for(i = 0; i < 3; i++)
			for(j = 0; j < 3; j++)
				c[i][j] = 0;

			int k;
			for(i = 0; i < 3; i++)
			for(j = 0; j < 3; j++)
			for(k = 0; k < 3; k++)
				c[i][j] = a[i][k] * b[k][j];

			printf("A multiplicacao das 2 matrizes eh:\n");
			for(i = 0; i < 3; i++)
			for(j = 0; j < 3; j++)
				printf("%d%c", c[i][j], j == 2 ? '\n' : ' ');

			break;

		default: 
			printf("Voce digitou a opcao errada!!\n");
			break;
	}

	return 0;
}