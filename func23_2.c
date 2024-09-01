#include <stdio.h>
#define SIZE 5

int max_ynd(int num,int num1){
	int tmp = 0;
	if(num > num1){
		tmp = num;	
		num = num1;
		num1 = tmp;
	}
	
	for(int i = 2;i <= num;++i){
		if(num % i == 0 && num1 % i == 0)
			return 0;	
	}
return 1;
}


int pok_parz_tiv(int arr[],int size,int num){

	for(int i = 0;i < size;++i){
		if(max_ynd(num,arr[i])){
			printf("yes %d,%d\n",num,arr[i]);
			return 0;
		}
	}
	printf("no");
}

int main(){

	int arr[SIZE];
	for(int i = 0;i < SIZE;++i){
		scanf("%d",&arr[i]);
	}
	printf("enter num:");
	int num = 0;
	scanf("%d",&num);
	pok_parz_tiv(arr,SIZE,num);	

return 0;
}

