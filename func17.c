#include <stdio.h>

int fact(int num){
	
	if(num > 0){
		return num * fact(num - 1);	
	}
return 1;
}

int main(){

	int num = 5;
	printf("%d",fact(num));

return 0;
}
