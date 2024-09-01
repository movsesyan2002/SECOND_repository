#include <stdio.h>

int fact(int num){
	if(num == 0){
		return 1;
	}
	else{
		return num * fact(num - 1);
	}
	
}

void count_expres(){
	
	double expression = (double)1/(fact(1)+1) + (double)2/(fact(2) + 2) + (double)3/(fact(3)+3) +(double)4/(fact(4)+4) +(double) 5/(fact(5)+5);
	printf("artahaytutyan arjeqy havasar e %lf\n",expression);
}

int main(){
	int num = 5;
	printf("%d\n",fact(num));
	count_expres();

}
