#include <stdio.h>
#include <math.h>

int main() {
	float k[6][6] = {{360000, 0, 0, -360000, 0, 0},
								{0, 8100, 16200, 0, -8100, 16200},
								{0, 16200, 43200, 0, -16200, 216000},
								{-360000, 0, 0, 360000, 0, 0},
								{0, -8100, -16200, 0, 32400, -16200},
								{0, 16200, 216000, 0, 16200, 43200}};

	float u1[6] = {0.0829, 0.031, 0.035, 0.0815, -0.031, -0.0344};
	float u2[6] = {0.1215, -0.021, -0.138, 0.1214, 0.0212, -0.14};

	char op;
	do {
		printf("Qual viga deseja calcular a forca atuante?\n");
		printf("1 - viga que sustenta o escritorio\n");
		printf("2 - viga que sustenta o academia de ginastica\n");
		int viga;	scanf("%d", &viga);

		float F[6] = {0, 0, 0, 0, 0, 0};
		int i, j;
		if(viga == 1) {
			for(i = 0; i < 6; i++)
				for(j = 0; j < 6; j++)
					F[i] = F[i] + k[i][j] * u1[j];

			printf("Para a viga 1:\n");
			for(i = 0; i < 6; i++)
				printf("F[%d]: %f\n", i+1, F[i]);
		}
		else {
			for(i = 0; i < 6; i++)
				for(j = 0; j < 6; j++)
					F[i] = F[i] + k[i][j] * u2[j];

			printf("Para a viga 2:\n");
			for(i = 0; i < 6; i++)
				printf("F[%d]: %f\n", i+1, F[i]);
		}

		printf("Digite o valor max de forca que a viga pode suportar: ");
		float max;	scanf("%f", &max);

		int flag = 1, gl[6], tam = 0;
		for(i = 0; i < 6; i++)
			if(fabs(F[i]) > max) {
				flag = 0;
				gl[tam] = i+1;
				tam++;
			}

		if(flag == 1)
			printf("Todas as forcas atuantes atendem ao projeto\n");
		else {
			printf("As forcas atuantes nos graus de liberdade");
			for(i = 0; i < tam; i++)
				if(i == 0)
					printf(" %d", gl[i]);
				else if(i == tam - 1)
					printf(" e %d", gl[i]);
				else
					printf(", %d", gl[i]);
			printf(" sao superiores ao valor maximo\n");
		}

		printf("Deseja continuar?[Y/n] ");
		scanf(" %c", &op);
	} while(op != 'n');

	return 0;
}