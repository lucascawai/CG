#include <stdio.h>
#include <string.h>

int main() {
	printf("Palavra original: ");
	char str[50];	scanf(" %s", str);

	int i;
	for(i = 0; str[i] != '\0'; i++)
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ('a' - 'A');
		else
			str[i] = str[i] - ('a' - 'A');

	for(i = 0; str[i] != '\0'; i++)
		if(str[i] == 'z')	str[i] = 'a';
		else if(str[i] == 'Z') str[i] = 'A';
		else str[i]++;

	for(i = 0; str[i] != '\0'; i+=2)
		if(str[i+1] != '\0') {
			char aux = str[i];
			str[i] = str[i+1];
			str[i+1] = aux;
		}

	printf("Palavra codificada: ");
	printf("%s\n", str);

	return 0;
}