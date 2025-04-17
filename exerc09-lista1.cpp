#include <stdio.h>

void leitura(float []);
float media(float []);
float notaAlta(float []);
void resul(float, float);


main(){

	float notas[10],med,mai;
	
	leitura(notas);
	med=media(notas);
	mai=notaAlta(notas);
	resul(med,mai);
}
void leitura(float nt[]){
	int cont1;

	for(cont1=0;cont1<10;cont1++){
		printf("Informe as notas: ");
		scanf("%f",&nt[cont1]);
	}
}

float media(float nts[]){
	int i;
	float soma,md;
	
	for(i=0;i<10;i++){
		soma=soma+nts[i];
	}
	md=soma/10;
	
	return md;
	}

float notaAlta(float nota[]){
	int cont2;
	float nAlta=nota[0];
	
	for(cont2=0;cont2<10;cont2++){
		if(nota[cont2]>nAlta){
			nAlta=nota[cont2];
		}
	}
	return nAlta;
}

void resul(float media,float maior){
	printf("\n===Resultados===");
	printf("\nMedia: %.2f",media);
	printf("\nMaior nota: %.2f",maior);
}