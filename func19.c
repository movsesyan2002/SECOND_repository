#include <stdio.h>

int pow_num(int num,int pow){   //2, 3
	if(pow != 0){
	  return num * pow_num(num,pow-1); //2 * 2 * 2 * 2	 
	}
	else{
		return 1;
	}
}


int main(){

	int num = 5;
	int pow = 3;
	printf("%d\n",pow_num(num,pow));

}
