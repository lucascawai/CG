#include <stdio.h>
#include <math.h>

int main() {
	int vetor[30];

	printf("Escreva o vetor:\n");

	int i, j;
	for(i = 0; i < 5; i++)
		scanf("%d", &vetor[i]);

	// BubbleSort
	for(i = 4; i >= 0; i--)
	for(j = 0; j < i; j++)
		if(vetor[j] > vetor[j+1]) {
			int aux = vetor[j];
			vetor[j] = vetor[j+1];
			vetor[j+1] = aux;
		}

	for(i = 0; i < 5; i++)
		printf("%d ", vetor[i]);
	printf("\n");

	float media = 0;
	for(i = 0; i < 5; i++)
		media += vetor[i]; // media = media + vetor[i];
	media /= 5; // media = media / 5;
	printf("Media sera: %f\n", media);

	float sd = 0;
	for(i = 0; i < 5; i++)
		sd += (vetor[i] - media)*(vetor[i] - media);
	sd /= 5;
	sd = sqrt(sd);
	printf("O desvio padrao eh: %f\n", sd);

	int moda, vezes = -1;
	for(i = 0; i < 5; i++) {
		int aux = 0;
		for(j = 0; j < 5; j++)
			if(vetor[j] == vetor[i])
				aux++;
		if(aux > vezes) {
			moda = vetor[i];
			vezes = aux;
		}
	}
	printf("A moda eh: %d\n", moda);

	return 0;
}