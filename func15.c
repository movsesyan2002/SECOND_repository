#include <stdio.h>

void to_binary(int num);

int main(){

	int num = 0;
	scanf("%d",&num);
	to_binary(num);
	printf("\n");
	return 0;

}


void to_binary(int num){

	int bin;
	
	bin = num % 2;
	
	if(num >= 2){
		to_binary(num/2);
	}
	printf("%c",(bin==0)? '0' : '1');

}
