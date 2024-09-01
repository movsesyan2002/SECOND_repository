#include <stdio.h>

void num_prt(int num); //tpum e 0-ic num elementnery

int main(){
	
	int num = 0;
	scanf("%d",&num);
	num_prt(num);
	printf("\n");
	return 0;
}

void num_prt(int num){

	if(num > 0){
		num_prt(num-1);
		printf("%d ",num);
	}
		
	else if(num < 0){
		printf("%d ",num);
		num_prt(num+1);
	}
	else{
		printf("%d ",num);
	}

}
