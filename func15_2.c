#include <stdio.h>

int sum = 0;

int num_sum(int num){

	if(num != 0){
		sum += num%10;
		num_sum(num/10);
	}
	return sum;
}


int main(){

	int num = 0;
	scanf("%d",&num);
	printf("%d",num_sum(num));
	return 0;
	

}
