#include <stdio.h>

void leitura(int[],int[]);
void intercala(int[],int[],int[]);
void mostra(int[]);


main(){
	int vetor1[10], vetor2[10], vetor3[20];
	
	leitura(vetor1,vetor2);
	intercala(vetor1,vetor2,vetor3);
	mostra(vetor3);
}	


void leitura(int vet1[], int vet2[]){
	int i;
	for (i=0;i<10;i++){
		printf("\nDigite o valor do vetor 1:");
		scanf("%d",&vet1[i]);
		printf("\nDigite o valor do vetor 2:");
		scanf("%d",&vet2[i]);
	}
}
void intercala(int vt1[],int vt2[],int vt3[]){	
	int i,k=0;
	for(i=0;i<20;i++){
		vt3[k]=vt1[i];
		k++;
		vt3[k]=vt2[i];
		k++;
	}
}
void mostra(int v3[]){
	int t;
	for(t=0;t<20;t++){
		printf("%d,",v3[t]);
	}
}