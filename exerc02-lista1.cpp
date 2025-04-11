#include <stdio.h>

void Leitura (int *, int *);
int Multiplica (int, int);
void show(int);

main(){
	int n1,n2,resul;
	
	Leitura(&n1,&n2);
	resul= Multiplica(n1,n2);
	show(resul);
}
void Leitura(int *num1, int *num2){
	printf("Digite o primeiro numero: ");
	scanf("%d", num1);
	printf("Digite o segundo numero: ");
	scanf("%d",num2);

}

int Multiplica(int nm1, int nm2){
	int multi;

	
	multi=nm1*nm2;
	
	return multi;
}
void show(int re){
	char resp;
	printf("Deseja multiplicar? s/n\n");
	fflush(stdin);
	scanf("%c",&resp);
	if(resp=='s'){
		printf("O resultado: %d",re);
	}
}