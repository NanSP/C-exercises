#include <stdio.h>

void fibo(int,int);

main(){
	printf("\n 1 \n 1");
	fibo(1,1);
}

void fibo (int ant, int atu){
	int r, termos=2;
	while(termos<20){
		r=ant+atu;
		printf("\n %d", r);
		ant= atu;
		atu=r;
		termos++;
	}
}