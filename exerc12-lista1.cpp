#include <stdio.h>


void incluir(int[],int *);
void listagem(int[]);
void iguais(int[],int[],int[]);

main(){
	int lt1[100], calc2[100], totalL=0, totalC=0, p[100];
	char op;
	
	do{
		printf("\n[1]Incluir alunos em LTI");
		printf("\n[2]Incluir alunos em CALCULO ll");
		printf("\n[3]Listar alunos em LTI");
		printf("\n[4]Listar alunos em CALCULO ll");
		printf("\n[5]Ver alunos matriculados em ambos os cursos");
		printf("\n[6]Finalizar programa");
		
		printf("\nQual a sua opcao?");
		fflush(stdin);
		scanf("%c",&op);
		
		switch(op){
			case '1': incluir(lt1,&totalL);
			break;
			
			case '2': incluir(calc2,&totalC);
			break;
			
			case '3': listagem(lt1);
			break;
		
			case '4': listagem(calc2);
			break;
		
			case '5': iguais(lt1,calc2,p);
			
			listagem(p);
			break;
		}
		getchar();
	} while (op != '6');
}

void incluir(int vet[],int *indice){
	do{
		printf("\nInforme a matricula do aluno: ");
		scanf("%d",&vet[*indice]);
		
		*indice=*indice+1;
	} while (vet[*indice-1] != 999);
}

void listagem(int vet[]){
	int i=0;
	
	while(vet[i] != 999){
		printf("\n %d", vet[i]);
		i++;
	}
	
	getchar();
	getchar();
}

void iguais(int v1[],int v2[], int vet[]){
	int i=0,j,x=0;
	
	while(v1[i] != 999){
		j=0;
		
		while ((v2[j] != 999) && (v1[i] != v2[j])){
			j++;
		}
		
		if(v2[j] != 999){
			vet[x] = v1[i];
			x++;
		}
		i++;
	}
	vet[x]=999;
}