#include <stdio.h>
#include <stdlib.h>
#include "poligonos.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	if(argc>1){
		printf("Foram inseridos %d argumentos:\n", argc);
		for(i=0; i<argc; i++){
			printf("%s\n", argv[i]);
		}
	}else{
		printf("Nao foram inseridos argumentos\n");
	}
	
	printf("%.2f.\n", calcAreaRetangulo(10,10));
	return 0;
}
