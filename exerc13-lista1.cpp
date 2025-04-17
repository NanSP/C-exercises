#include <stdio.h>

void leitura();
int secundaria();

int mat[3][3];

main(){
	int r;
	printf("\n Informe 9 numeros: \n");
	leitura();
	
	r=secundaria();
	
	printf("\n A soma da diagonal secundaria = %d",r);
	
	getchar();
	getchar();
}

void leitura(){
	int i=0,j=0;
	
	while(i<3){
		j=0;
		while (j<3){
			scanf("%d",&mat[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
}

int secundaria(){
	int i=0,j=0, soma=0;
	
	while (i<3){
		j=0;
		while(j<3){
			if((i+j)==2){
				soma=soma+mat[i][j];
			}
			j++;
		}
		i++;
	}
	return soma;
}
