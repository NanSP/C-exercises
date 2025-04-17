#include <stdio.h>

void leitura();
int somas();

int matriz[3][4];
int i,k,soma=0,maior=0;
main(){
	leitura();
	somas();
}
void leitura(){
	for(i=0;i<3;i++){
		for(k=0;k<4;k++){
			printf("\nInforme o numero: \n");
			scanf("%d",&matriz[i][k]);
		}
	}
	
	for (i=0;i<3;i++){
		for (k=0;k<4;k++){
			printf("%d ",matriz[i][k]);
		}
		printf("\n");
	}
}

int somas(){
	for (k=0;k<4;k++){
		for(i=0;i<3;i++){
			soma=soma+matriz[i][k];
		}	
		if(soma>maior){
			maior=soma;
		}
		printf("\nSoma: %d",soma);
		soma=0;
	}
	printf("\nMaior soma: %d",maior);
	return soma,maior;
}