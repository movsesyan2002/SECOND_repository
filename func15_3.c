#include <stdio.h>

int sum_el(int num){
	
	static int sum = 0;
	if(num != 0){
		sum += num%10;
		sum_el(num/10);
	}
return sum;
}

int main(){
	
	int num = 123;
	printf("%d",sum_el(num));

return 0;
}
