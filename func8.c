#include <stdio.h>
#define SIZE 5

void arr_fact_elem(int* arr,int n);

int main(){

	int array[SIZE];
	for(int i = 0;i < SIZE;++i){
		scanf("%d",&array[i]);
	}
	
	arr_fact_elem(array,SIZE);
	for(int i = 0;i < SIZE;++i){
		printf("%d ",array[i]);
	}
	printf("\n");
	return 0;
}


void arr_fact_elem(int* arr,int n){
	int elem = 0;
	for(int i = 0;i < n;++i){
		int fact = 1;
		int elem = arr[i];
		while(elem != 0){
			fact *= elem;
			elem--;
		}
		arr[i] = fact;
	}


}
