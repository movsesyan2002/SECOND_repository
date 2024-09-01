#include <stdio.h>

void rec_rev_num(int num);

int main(){
	
	int num = 0;
	scanf("%d",&num);
	rec_rev_num(num);
	printf("\n");
	return 0;
}

void rec_rev_num(int num){
	
	int res = 0;
	if(num > 0){
		res = num % 10;
		printf("%d",res);
		rec_rev_num(num/10);
	}


}
