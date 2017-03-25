#include <stdio.h>

int main() {
	printf("Escreva uma linha:\n");

	char linha[105];
	scanf(" %[^\n]s", linha);

	printf("Escreva o par de char:\n");

	char par[3];
	scanf(" %s", par);

	printf("As posicoes em que o par de char aparecem sao:\n");
	int i;
	for(i = 1; linha[i] != '\0'; i++)
		if(linha[i-1] == par[0] && linha[i] == par[1] )
			printf("%d e %d\n", i, i+1);

	return 0;
}