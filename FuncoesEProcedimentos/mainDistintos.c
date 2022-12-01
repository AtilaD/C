#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void imprime1(int v[], int tam){
	int i;
	for(i=0; i<tam; i++){
		printf("%d\n", v[i]);
	}
}
void imprime2(int v[5]){
	int i;
	for(i=0; i<5; i++){
		printf("%d\n", v[i]);
	}
}
void imprime3(int *v, int tam){
	int i;
	for(i=0; i<tam; i++){
		printf("%d\n", v[i]);
	}
}
void imprime(int m[][4], int n){
	int i, j;
	for(i=0; i<n; i++){
		for(j=0; j<4; j++){
			printf("%d ", m[i][j]);
		}
	printf("\n");
	}
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	int vet[5]={1,2,3,4,5};
	
	int mat[3][4]={{1,2,3,4},{12,52,26,54},{88,84,65,25}};
	
	puts("Imprime1:");
	imprime1(vet, 5);
	
	puts("Imprime: ");
	imprime(mat, 3);
	return 0;
}
