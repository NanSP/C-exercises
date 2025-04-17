#include <stdio.h>

void leitura();
void soma();

int mat[3][4];

main(){
	printf("\n== Informe os numeros ==\n");
	leitura();
	soma();
	getchar();
	getchar();
}

void leitura (){
	int i=0,j;
	
	while(i<3){
		j=0;
		while(j<4){
			scanf("%d",&mat[i][j]);
			
			if((j==0)|| (mat[i][j] <mat[i][j-1])){
				j++;
			}
			else{
				printf("\nTem que infomar um numero menor\n");
			}
			if(j==4){
				i++;
				printf("\n");
			}
		}
	}
}

void soma(){
	int i=0,j=0,s=0;
	
	while(j<4){
		i=0;
		while(i<3){
			s=s+mat[i][j];
			i++;
		}
		j++;
		printf("\n %d",s);
		s=0;
	}
}