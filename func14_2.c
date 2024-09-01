#include <stdio.h>
#define SIZE 5
void ptr_elem(int arr[],int size,int index){
	if(index < size){
		printf("%d",arr[index]);
		ptr_elem(arr,size,index+1);
	}

}


int main(){

	int arr[SIZE] = {1,2,3,4,5};
	ptr_elem(arr,SIZE,0);

return 0;
}
