#include <stdio.h>
#define ROW 4
#define COLUMN 3



int is_prime(int num){

	if(num < 2){
		return 0;
	}
	
	for(int i = 2;i < num/2;++i){
		if(num % i == 0){
			return 0;
		}
		else{
			return 1;
		}
	
	}
}

void pokh_parz(int arr[ROW][COLUMN]){
		int parz = 0;
		for(int i = 0;i < ROW;i+=2){
			for(int j = 0;j < COLUMN;++j){
				if(is_prime(arr[i][j])){
					parz = arr[i][j];
					printf("%d\n",parz);
					break;		
				}
			}
			for(int k = 0;k < COLUMN;++k){
				arr[i][k] = parz;
			}
		}	
	}
int main(){

	int arr[ROW][COLUMN] = { {1,2,3}, 
				{4,5,6},
				{7,8,9},
				{10,11,12},	
				};
	pokh_parz(arr);
	for(int i = 0;i < ROW;++i){
		for(int j = 0;j < COLUMN;++j){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}	
return 0;
}
