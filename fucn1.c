#include <stdio.h>

int sum(int num);

int main(){
	
	printf("print sum of digits %d\n",sum(512));
	return 0;	
}

	int sum(int num){
		int sum_n = 0;
		int a = 1;
		while((num/a)%10!=0){
			sum_n += (num/a)%10;
			a*=10;
		}
		return sum_n;
	}


