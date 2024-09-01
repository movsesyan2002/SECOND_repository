#include <stdio.h>

void to_octal(int num,int base){

	if(num >= base){
		to_octal( num/base, base);
	} 
	int oct = num % base; 
	if(0 <= oct || oct < 10){
		printf("%d",oct); 
	}
	else {
	printf("%c", oct + 55);
	}

}


int main(){

	int num = 0;
	scanf("%d",&num);
	int base = 0;
	scanf("%d",&base);
	printf("num's %d octal num is: ",num);
	to_octal(num,base);
	printf("\n");

}
