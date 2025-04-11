#include <stdio.h>

void leitura(int *, int *);
void pares(int, int);


int main(){
	
	int num1, num2;
	leitura(&num1,&num2);
	pares(num1,num2);
}

	
void leitura(int *n1, int *n2){
	do{
	printf("Informe o primeiro numero: ");
	scanf("%d",n1);
	printf("Informe o segundo numero: ");
	scanf("%d",n2);
	
	if(*n1>=*n2){
		printf("\nVocê deve digitar o primeiro numero maior do que o segundo!");
		
	}
	}while(*n1>=*n2);
}

void pares(int n1, int n2){
	int i;
	
	for(i=1;i<=n2;i++){
		if((i%2)==0){
			printf("\n%d", i);
		}
	}
}

