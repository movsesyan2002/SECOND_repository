#include <stdio.h>
#define SIZE 5
void sort(int arr[],int n);

int main(){
	
	int array[SIZE];
	for(int i = 0;i < SIZE;++i){
		scanf("%d",&array[i]);
	}
	sort(array,SIZE);
	printf("sorted array:");
	for(int i = 0;i < SIZE;++i){
		printf("%d ",array[i]);
	}
	printf("\n");
	return 0;
}

void sort(int arr[],int n){

	for(int i = 0;i < n - 1;++i){
		for(int j = 0;j < n - i - 1;++j){
			if(arr[j] > arr[j + 1]){
				int tmp = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	
		
}
