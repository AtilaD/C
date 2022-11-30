#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n[5];
	int v[5] = {20, 55, 68, 85, 12};
	int i;
	int e;
	int ve[5];
	float s;
	
	float m;
	
	n[0] = 10;
	n[1] = 20;
	n[2] = 30;
	n[3] = 40;
	n[4] = 50;
	
	m = (n[0] + n[1] + n[2] + n[3] + n[4]) / 5;
	
	printf("A media dos vetores %f \n", m);
	for(i=0; i<5; i++){
		s += v[i];
	}
	
	printf("Resulto da media do segundo exemplo %f\n", s/5);
	for(e=0; e<5; e++){
		printf("Escolha o valor do vetor \n");
		scanf("%d", &ve[e]);
	}
	
	printf("Dados inseridos: \n");
	for(e=0; e<5; e++){
		printf("%d \n", ve[e]);
	}
}
