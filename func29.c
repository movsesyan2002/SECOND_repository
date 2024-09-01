#include <stdio.h>

int kcac_number(int num,int num1){
int art = num1;
	while(art > 0){
		num*=10;
		art/=10;	
	}

	return num = num + num1;

}

int main(){

	int num = 35;
	int num1 = 7897;
	printf("num = %d",kcac_number(num,num1));
	return 0;	
}
