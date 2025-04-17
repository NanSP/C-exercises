#include <stdio.h>

void leitura();
void transposta();
void mostra();

int mat[3][4],mat2[4][3];

main(){
	printf("Entre com os valores: \n");
	leitura();
	transposta();
	printf("\nA matriz transposta da matriz 1: \n");
	mostra();
	getchar();
	getchar();
}

void leitura(){
	int i=0,j;
	
	while(i<3){
		j=0;
		
		while(j<4){
			scanf("%d",&mat[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
}

void transposta(){
	int j=0,i;
	
	while(j<3){
		i=0;
		
		while(i<4){
			mat2[i][j]=mat[j][i];
			i++;
		}
		j++;
	}
}

void mostra(){
	int j=0,i;
	
	while(j<4){
		i=0;
		
		while(i<3){
			printf("%d ",mat2[j][i]);
			i++;
		}
		j++;
		printf("\n");
	}
}