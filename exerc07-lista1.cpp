#include <stdio.h>
#include <strings.h>

void le_dados(int *);
void totalizaAltura(float);
void achaMaior(float, char[]);
void totalizaPeso(int);
void achaGorda(int, char[]);
void mostraDados();
float calculaAltura();
float calculaPeso();

float totalAltura=0;
char nomeMaior[10];
float maiorAltura=0;
int totalPeso=0;
char nomeGorda[10];
int maisGorda=0;
int totalH=0,totalM=0;
int total=0;

main(){
	while(total < 4){
		le_dados(&total);
	}
	mostraDados();
}

void le_dados(int *i){
	char nome[10],sexo;
	float altura;
	int peso;
	
	printf("\nEntre com o nome: ");
	fflush(stdin);
	scanf("%s",&nome[10]);
	printf("\nEntre com o sexo: ");
	fflush(stdin);
	scanf("%s",&sexo);
	printf("\nEntre com a altura: ");
	scanf("%f",&altura);
	printf("\nEntre com o peso: ");
	scanf("%d",&peso);
	
	if(sexo=='m'){
		totalizaAltura(altura);
		achaMaior(altura,nome);
		totalH++;
	} else{
		totalizaPeso(peso);
		achaGorda(peso,nome);
		totalM++;
	}
	*i=*i+1;
}

void totalizaAltura(float tamanho){
	totalAltura=totalAltura+tamanho;
}

void totalizaPeso(int p){
	totalPeso=totalPeso+p;
}

void achaMaior(float tamanho,char n[]){
	if(tamanho>maiorAltura){
		maiorAltura=tamanho;
		
		strcpy(nomeMaior,n);
	}
}

void achaGorda(int peso, char n[]){
	if(peso>maisGorda){
		maisGorda=peso;
		
		strcpy(nomeGorda,n);
	}
}

void mostraDados(){
	float mediaAltura,mediaPeso;
	
	printf("\n=====RESPOSTAS=====");
	
	mediaAltura=calculaAltura();
	printf("\nA media da altura dos homens: %.2f",mediaAltura);
	
	mediaPeso=calculaPeso();
	printf("\nA media do peso das mulheres: %.2f",mediaPeso);
	
	printf("\nNome do homem mais alto: %s",nomeMaior);
	printf("\nNome da mulher mais gorda: %s",nomeGorda);
	getchar();
	getchar();
}

float calculaAltura(){
	float media;
	
	media=totalAltura/totalH;
	
	return media;
}

float calculaPeso(){
	float media;
	
	media=totalPeso/totalM;
	
	return media;
}