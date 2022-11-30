#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int d;
	
	printf("Digite um valor de 1 a 3. \n");
	scanf("%d", &d);
	
	switch(d){
		case 1:
			printf("Um Homem de sorte. \n");
			break;
		case 2:
			printf("Uma Mulher de sorte. \n");
			break;
		case 3:
			printf("Voce teve sorte. \n");
			break;
			
	}
	return 0;
}
