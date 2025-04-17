#include <stdio.h>

void leitura(int *);
float calcula(int *, int *);
void mostra(float);


main(){
	int num,den,n;
	float resp=0;
	
	leitura(&n);
	den=n;
	
	for (num=1;num<=n;num++){
		if((num%2)==0){
			resp=resp-calcula(&num,&den);
		}
		else{
			resp= resp+calcula(&num,&den);
		}
	}
	
	mostra(resp);
}

void leitura(int *x){
	printf("\nEntre com o numero de termos da serie: ");
	scanf("%d",x);
}

float calcula(int *n1,int *n2){
	float r;
	r=(float)*n1/(float)*n2;
	*n2=*n2-1;
	
	return r;
}

void mostra(float r){
	printf("\n o valor da serie e = %.2f",r);
	getchar();
	getchar();
}