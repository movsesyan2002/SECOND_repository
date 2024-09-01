#include <stdio.h>
#define SIZE 5

void reverse(int* arr,int n);

int main(){

	int array[SIZE];
	for(int i = 0;i < SIZE;++i){
		scanf("%d",&array[i]);
	}

	reverse(array,SIZE);
	for(int i = 0;i < SIZE;++i){
		printf("%d ",array[i]);
	}
	printf("\n");
	return 0;
	
}


void reverse(int* arr,int n){

	for(int i = 0,j = n - 1;i <= n/2,j >= n/2;++i,--j){
		int tmp = arr[j];
		arr[j] = arr[i];
		arr[i] = tmp;
	}

	
} 
