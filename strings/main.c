#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c[10];
	
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
	
	printf("Digite um dado: (gets) \n ");
	gets(c);
	fflush(stdin);
	puts(c);
	return 0;
}
