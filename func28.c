#include <stdio.h>


int fact(int num){
	
	if(num <= 0){
		return 1;
	}
		return num * fact(num - 1);
}

int power_num(int num){

	if(num > 0){
		return fact(num%10) + power_num(num/10);
	}

	return 0;
}


void check(int start,int end){
	for(int start = 0;start < end;++start){
		if(power_num(start)==start){
			printf("%d ",start);
		}
	
	}
	
}

int main(){

	check(0,200);
	

}
