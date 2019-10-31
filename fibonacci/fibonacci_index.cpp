#include <stdio.h>
int fibonacci_index(int pos){
	if(pos==0 || pos == 1) return 1; 
	return fibonacci_index(pos-1)+fibonacci_index(pos-2);
}

int main(){

        printf("Sequencia de Fibonacci de forma recursiva:\n");
	printf("%d\n\n",fibonacci_index(10));		

	return 0;
}
