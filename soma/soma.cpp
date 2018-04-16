#include <stdio.h>
float soma(float *v, int l){
	if(l==0) return 0;
	return v[l-1]+soma(v,l-1);
}
int main(){
	float v[6]= {1,2,3,4,5,6};
	printf("%f",soma(v,6));
}
