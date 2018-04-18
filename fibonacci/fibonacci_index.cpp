#include <stdio.h>
int fibonacci_index(int pos){
	if(pos==0 || pos == 1) return 1; 
	return fibonacci_index(pos-1)+fibonacci_index(pos-2);
}
int main(){
	printf("%d",fibonacci_index(10));		
}
