#include <stdio.h>

void leitura();
void calcula();

int mat[3][3];

main(){
	printf("Entre com o valores: ");
	leitura();
	calcula();
	getchar();
	getchar();
}

void leitura(){
	int i=0,j;
	
	while(i<3){
		j=0;
		while(j<3){
			scanf("%d",&mat[i][j]);
			j++;
		}
		i++;
	}
}

void calcula(){
	int i=0,j,maior=mat[0][0],menor=mat[0][0],lin=0, col=0,lin2=0,col2=0;
	
	while(i<3){
		j=0;
		while(j<3){
			if(mat[i][j]>maior){
				maior=mat[i][j];
				lin=i;
				col=j;
			}
			if (mat[i][j]<menor){
				menor=mat[i][j];
				lin2=i;
				col2=j;
			}
			j++;
		}
		i++;
	}
	printf("\nO maior numero e: %d. A linha e %d. A coluna e %d\n",maior,lin,col);
	printf("\nO menor numero e: %d. A linha e %d. A coluna e %d\n",menor,lin2,col2);
}