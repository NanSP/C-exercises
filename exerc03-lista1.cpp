#include <stdio.h>

void leitura(float *, float *, char *);
float calcular(float, float, char);
void print(float);

main(){
	float num1, num2,resul;
	char op;
	
	leitura(&num1,&num2,&op);
	resul=calcular(num1,num2,op);
	print(resul);
}

void leitura(float *n1, float *n2, char *op){
	
	printf("Digite o primero numero: ");
	scanf("%f",n1);
	printf("Digite o segundo numero: ");
	scanf("%f",n2);
	printf("Informe a operação: +,-,*,/\n");
	fflush(stdin);
	scanf("%c",op);
}

float calcular(float n1, float n2, char op){
	
	float r;
	
	switch(op){
	case '+':
		r=n1+n2;
		break;
	case '-':
		r=n1-n2;
		break;
	case '*':
		r=n1*n2;
		break;
	case '/':
		r=n1/n2;
		break;
	}
	return r;
}	

void print(float result){
	printf("O resultado: %f",result);
}