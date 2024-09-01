#include <stdio.h>
#define SIZE 4
int bigger(int arr[],int n);

int main(){

	int array[SIZE];
	for(int i = 0;i < SIZE;++i){
		scanf("%d",&array[i]);
	}
	
	printf("mecaguyn element is %d\n",bigger(array,SIZE));
	return 0;
}


int bigger(int arr[],int n){

	int max = arr[0];
	for(int i = 0;i < n;++i){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	
	return max;
}

