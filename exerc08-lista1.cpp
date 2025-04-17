#include <stdio.h>

void leitura(int *);
void testa(int, int *, int);
void mostra(int);

int posicao=0;

main(){
	int maior,numero,i=0;
	
	do{
		leitura(&numero);
		testa(numero,&maior,i);
		i++;
	}while(numero != 0);
	
	mostra(maior);
}

void leitura(int *n){
	printf("\n Entre com um numero ou zero para sair: ");
	scanf("%d",n);
}

void testa(int n,int *m,int i){
	if(n>*m){
		*m=n;
		posicao = i;
	}
}

void mostra(int m){
	printf("\n O maior valor e %d e esta na posicao %d",m,posicao);
	getchar();
	getchar();
}