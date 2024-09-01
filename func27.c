#include <stdio.h>

int num_3(int num){
	
	return num * num * num;
}


int arm_num(int num){
	
	if(num > 0){
		return num_3(num % 10) + arm_num(num/10);
	}
		return 0;
}

void check_arm(int num){
	
	if(arm_num(num) == num){
		printf("yes\n");
	}
	else{
		printf("no\n");
	}

}

int main(){
	int num = 0;
	printf("enter number:");
	scanf("%d",&num);
	check_arm(num);
return 0;

}
