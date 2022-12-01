#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct tipo_pessoa{
	char nome[50];
	int idade;
	float peso;
};

typedef struct tipo_pessoa tipo_pessoa;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	tipo_pessoa lista[TAM];
	int i = 0;
	
	for(i=0; i<TAM; i++){
		printf("Digite o nome: ");
		scanf("%50[^\n]s", &lista[i].nome);
		fflush(stdin);
		
		printf("Idade: ");
		scanf("%d", &lista[i].idade);
		fflush(stdin);
		
		printf("Peso: ");
		scanf("%2f", &lista[i].peso);
		fflush(stdin);
		
	};
	
	system("cls");
	for(i=0; i<TAM; i++){
		printf("------------------Pessoa %d------------------\n", i+1);
		printf("\tNome: %s\n", lista[i].nome);
		printf("\tIdade: %d\n", lista[i].idade);
		printf("\tPeso: %2f\n", lista[i].peso);
		printf("----------------------------------------------\n");
	}
	return 0;
}
