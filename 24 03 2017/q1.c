#include <stdio.h>
#include <string.h>

int main() {
	printf("Digite a linha:\n");

	char str[80];
	scanf(" %[^\n]s", str);

	int tam = strlen(str);
	printf("A linha tem %d caracteres\n", tam);

	return 0;
}
