#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void leitura(char *, float *);
float NewValor(float);


main(){
	char nome[20];
	float valor;
	
	leitura(nome,&valor);
	valor= NewValor(valor);
	
	printf("\nNovo valor: %f",valor);
	getchar();
	getchar();
}
void leitura (char *n, float *v){
	printf("Informe o nome do produto: ");
	scanf("%s",n);
	printf("\nInforme o valor inicial do produto: ");
	scanf("%f",v);
}

float NewValor(float vn){
	float valor_novo;
	
	valor_novo = vn*1.2;
	
	return valor_novo;
}