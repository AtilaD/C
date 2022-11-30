#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define O 20
#define D 20

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	char origem[O] = {"Olá mundo!\n"};
	char destino[D] = {"Tudo bem com voces?\n\n"};
	char origem2[O] = {"Origem2"};
	char destino2[D] = {"Destino2"};
	char c[10];
	int i;
	char hardText[O] = {"/exit"};
	char senhaUsuario[O];
	int ok;
	
	printf("Digite um dado: \n");
	scanf("%s", c);
	fflush(stdin);
	printf("Resultado: %s \n\n", c);
	
	printf("Digite um dado (aprimorado): \n");
	scanf("%9[^\n]s", c);
	fflush(stdin);
	printf("Resultado do dado aprimorado: %s \n\n", c);
	
	printf("Digite um dado (usaremos fgets): \n");
	fgets(c, 10, stdin);
	fflush(stdin);
	printf("Dado pelo fgets e puts: ");
	puts(c);
	
	printf("Digite um dado: (gets)\n");
	gets(c);
	fflush(stdin);
	puts(c);
	printf("\n \n");
	
	printf("Antes do strcpy: \n");
	puts(origem);
	puts(destino);
	
	strcpy(destino, origem);
	
	printf("depois do strcpy: \n");
	puts(origem);
	puts(destino);
	printf("\n\n");
	
	strcat(destino2, origem2);
	
	printf("Agora strcat para origem e destino 2 \n");
	puts(destino2);
	printf("\n\n");
	
	printf("Tamanho do texto acima é: ");
	i = strlen(destino2);
	printf("%d \n\n", i);
	
	printf("Digite sua senha: \n");
	gets(senhaUsuario);
	
	ok = strcmp(hardText, senhaUsuario);
	
	if(ok == 0){
		printf("Senha esta correta \n");
	}else{
		printf("Senha errada! \n");
	}
	return 0;
}
