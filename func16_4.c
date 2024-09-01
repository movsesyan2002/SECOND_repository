#include <stdio.h>

void ptr_bin(int num,int base){
		
	if(num >= base){
		ptr_bin(num/base,base);
	}
	printf("%d",num % base);
}
	
int main(){

	int num = 15;
	ptr_bin(num,2);
return 0;
}
