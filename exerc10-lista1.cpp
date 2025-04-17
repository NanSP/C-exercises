#include <stdio.h>


main(){
	
int vetor1[8]={1,2,3,4,5,6,7,8},
	vetor2[8]={8,7,6,5,4,3,2,1},vetor3[8];
int i,t;

	for (i=0;i<8;i++){
		vetor3[i]=vetor1[i]+vetor2[i];
	}
	
		for(t=0;t<8;t++){
		
		printf("%d,",vetor3[t]);
	}
}