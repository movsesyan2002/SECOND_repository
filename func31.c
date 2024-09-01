#include <stdio.h>

int is_prime(int num){
	if(num <= 1){
		return 0;
	}
	for(int i = 2;i <= num/2; ++i){
		if(num % i == 0){
			return 0;
		}
	}
return 1;
}

int check_primes_sum(int num){
	int copy_num = num;
	for(int i = 2;i <= num/2;++i){
		if(is_prime(i) && is_prime(copy_num - i)){
			printf("arajin parz tvi %d ev erkrord parz tvi %d gumary = %d\n",i,(copy_num - i),num);
			return 0;
		}
	}
printf("chuni\n");
return 0;
}
int main(){

	int num = 0;
	scanf("%d",&num);
	check_primes_sum(num);
		
}
