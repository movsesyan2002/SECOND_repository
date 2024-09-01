#include <stdio.h>
#define SIZE 5

int mecaguyn(int num,int num1){
	
	if(num > num1){
		int tmp = num1;
		num1 = num;
		num = tmp;
	}

	for(int i = 2;i <= num;i++){
		if(num % i == 0 && num1 % i == 0){
			return 0;
		}	  
	}
	return 1;
}

int pokh_parz(int arr[],int size,int number){
	
	for(int i = 0;i < size;i++){
		if(mecaguyn(arr[i],number)){
			printf("%d-n %d-n pokhadardzabar parz en\n",arr[i],number);
			return 0;
		}
	}
	printf("chka tenc tver");
}

int main(){

	int arr[SIZE];
	printf("enter the array elements");
	for(int i = 0;i < SIZE;++i){
		scanf("%d",&arr[i]);
	}
	int num = 0;
	printf("enter the number");
	scanf("%d",&num); 
	pokh_parz(arr,SIZE,num);

return 0;
}
