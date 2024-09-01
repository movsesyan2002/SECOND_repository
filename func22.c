#include <stdio.h>
#define SIZE 5


void prelast_elem(int* arr,int size){
	
	for(int i = 0;i < size;i++){
		for(int j = 0;j < size - i - 1;++j){
			if(arr[j] > arr[j + 1]){
				int tmp = arr[j +1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}	

	printf("2rd amenamec elementy %d\n",arr[size-2]);
return;
}



int main(){

	int arr[SIZE];
	for(int i = 0;i < SIZE;++i){
		scanf("%d",&arr[i]);
	}
	prelast_elem(arr,SIZE);
	
	
	return 0;
}
