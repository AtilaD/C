#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float maior(float num1, float num2);

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	
	float x, y, m;
	
	printf("Digite um numero: \n");
	scanf("%f", &x);
	fflush(stdin);
	
	printf("Digite outro numero: \n");
	scanf("%f", &y);
	fflush(stdin);
	
	m = maior(x,y);
	
	printf("O maior numero é o %.2f", m);
	return 0;
	
	float maior(float num1, float num2){
	if(num1>num2)
		return num1;
	else
		return num2;
	}
}
