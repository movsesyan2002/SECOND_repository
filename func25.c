#include <stdio.h>
#define SIZE 5

/*void sort(int arr[]){
	for(int i = 0; i < SIZE;++i){
		for(int j = 0;j < SIZE -i -1;++j){
			if(arr[j] > arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}*/

void select_sort(int arr[]){
	for(int i = 0;i < SIZE;++i){
		int min_index = i;
		for(int j = i + 1;j < SIZE;++j){
			if(arr[j] < arr[min_index]){
				min_index = j;
			}
		}
		if(min_index != i){
			int tmp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = tmp;
		}

	}
}
int count_dif_elem(int arr[]){
	int count = 1;
	select_sort(arr);
	for(int i = 0;i < SIZE - 1;++i){
		if(arr[i] != arr[i+1]){
			count++;
		}
	}
	return count;

}

int main(){
			//0001123358
		int arr[SIZE]={1,2,3,4,5};
	select_sort(arr);
	for(int i = 0;i < SIZE;++i){
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("count dif elem %d\n",count_dif_elem(arr));
	
	return 0;
}
