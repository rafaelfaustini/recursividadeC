#include <stdio.h>

float array_sum(float *array,int length){
	if(length-1 == 0){
		return array[length-1];
	}
	return array[length-1]+ array_sum(array, length-1);
	
}

int main(){
	float test[] = {2.0,3.5,5.0};
	printf("%f",array_sum(test,3));
}
