#include <stdio.h>
#define SIZE 5
int gumar_arr(int arr[],int size,int id){

	static int sum = 0;
	if(id < size){
		sum += arr[id];
		gumar_arr(arr,size,id + 1);
	}

return sum;
}

int main(){

	int arr[SIZE] = {1,2,3,4,5};
	printf("%d\n",gumar_arr(arr,SIZE,0));
	return 0;
}	

