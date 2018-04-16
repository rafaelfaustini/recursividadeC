#include <stdio.h>

float media(float *v, int n ,int k){

if(n == 0) return 0;
return v[n-1]/k+media(v,n-1,k);	
	
}

int main(void){
float vetor[6] = {1,2,3,4,5,6};
float m = media(vetor, 6,6);

printf("%f",m);
	
	
}
