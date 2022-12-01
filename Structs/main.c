#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
	int idade;
	float peso;
	float altura;
	char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	float IMC;
	
	//Criando e inicializando
	
	tipo_pessoa pes = {0, 0.0, 0.0, "teste"};
	
	printf("Iniciando... \n");
	printf("Nome %s\n", pes.nome);
	printf("Idade %d\n", pes.idade);
	printf("Peso %2f\n", pes.peso);
	printf("Altura %2f\n", pes.altura);
	
	//Atribuindo valores
	
	printf("Digite seu nome:\n");
	scanf("%s", &pes.nome);
	fflush(stdin);
	
	printf("Digite sua idade:\n");
	scanf("%d", &pes.idade);
	fflush(stdin);
	
	printf("Digite seu peso:\n");
	scanf("%f", &pes.peso);
	fflush(stdin);
	
	printf("Digite sua altura:\n");
	scanf("%f", &pes.altura);
	fflush(stdin);
	
	//Fazendo calculo de IMC
	
	IMC = pes.peso/(pes.altura * pes.altura);
	
	printf("%2f", IMC);
	
	if(IMC<18.5){
		printf("Bem vindo %s, vejo que sua idade é %d, seu peso é %2f e altura %2f, com esses dados seu IMC é %2f, entao voce esta abaixo do peso", pes.nome, pes.idade,
		pes.peso, pes.altura, IMC);
	};
	
	
	
	
	return 0;
}
