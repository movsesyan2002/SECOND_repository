#include <stdio.h>
#define SIZE 5
void pokh_parz(int* arr,int size,int num){
	int max = 0;//2 4 6 17 32,,,22	
	int num1 = 0;
	   for(int i = 0;i < size;++i){
		int min = num;
		if(arr[i] < num){
			min = arr[i];
		}
		for(int j = 2;j < min;++j){
			if((arr[i] % j != 0 && num % j != 0) || (arr[i] % j == 0 && num % j != 0) || (arr[i] % j != 0 && num % j == 0)){
					max = 1;
					num1 = arr[i];
			}
			else{
				max = j;
				break;
			}
	}
	if(max == 1){
		printf("%d-i %d-i tveri amenamec baj %d\n",num1,num,max);
		break;
		}
	}
}

int main(){

	int arr[SIZE];	
	printf("enter array elements: ");
	for(int i = 0;i < SIZE;++i){
		scanf("%d",&arr[i]);
	}
	int num = 0;
	printf("enter number: ");
	scanf("%d",&num);
	pokh_parz(arr,SIZE,num);
	
return 0;

}
