#include <stdio.h>

int fibonaci(int id);

int main(){

	int id = 0;
	scanf("%d",&id);
	printf("fibonachi index is %d num is %d\n",id,fibonaci(id));

}


int fibonaci(int id){

	if(id <= 0){
		return 0;
	}
	else if(id == 1){
		return 1;
	}
	
	int zero = 0;
	int one = 1;
	int next = 0;
	for (int i = 2;i <= id;++i){
		next = zero + one;
		zero = one;
		one = next;
	}
	return next;
	
}
