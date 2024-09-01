#include <stdio.h>
#define SIZE 4


int is_prime(int num){
	
	if(num <= 1){
		return 0;
	}
	
	for(int i = 2;i <= num/2;i++){
		if(num % i == 0){
			return 0;
		}
	}
	return 1;	
}


void swap_parz(int arr[SIZE][SIZE]){
	int parz = 0;
	for(int i = 0;i < SIZE;i+=2){
		
		for(int j = 0;j < SIZE;j++){
			if(is_prime(arr[i][j])){
				parz = arr[i][j];
				break;
			}
		}	
		
		for(int k = 0;k < SIZE;k++){
			arr[i][k] = parz;
		}
	}
}


int main(){

	int arr[SIZE][SIZE];
	printf("enter array numbers:");
	

	for(int i = 0;i < SIZE;++i){ 
		for(int j = 0;j < SIZE;++j){ 
			scanf("%d",&arr[i][j]);
		}
	}
	
	swap_parz(arr);
	
	for(int i = 0;i < SIZE;++i){ 
		for(int j = 0;j < SIZE;++j){ 
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
return 0;
}


