#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade = 0;
	
	printf("Valor inicial da idade: %d. \n", idade);
	printf("Digite uma idade: \n");
	scanf("%d", &idade);
	printf("Idade informada: %d. \n", idade);
	return 0;
}
