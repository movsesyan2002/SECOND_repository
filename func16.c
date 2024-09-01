#include <stdio.h>
void sort_arr(int arr[],int size);
int binary_search(int* arr,int low,int high,int num);


int main(){
	
	printf("enter size\n");
	int size = 0;
	scanf("%d",&size);
	printf("enter array elements\n");
	
	int arr[size];
	for(int i = 0;i < size;++i){
		scanf("%d",&arr[i]);
	}
 	
	int low = 0;
	int high = size - 1; 
	int num = 0;
	
	printf("enter finding index value\n");
	scanf("%d",&num);
	sort_arr(arr,size);
	printf("%d ", binary_search(arr,low,high,num));
	return 0;
}



void sort_arr(int arr[],int size){

	for(int i = 0; i < size - 1; ++i){
		for(int j = 0;j < size - i - 1; ++j){
			if(arr[j] > arr[j + 1]){
				int tmp = arr[j + 1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	for(int i = 0;i < size;++i){
		printf("%d ",arr[i]);
	}
}


int binary_search(int* arr, int low,int high,int num){
				
		while(low <= high){
			int mid = low + (high - low)/2;
			
			if(arr[mid] == num){
				return mid;
			}
			
			if(arr[mid] < num){
				low = mid + 1;
			}
			
			else {
				high = mid - 1;
			}
	
	}
	return -1;
}
