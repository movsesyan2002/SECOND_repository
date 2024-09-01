#include <stdio.h>


int armat(int num);

int main(){
	int num = 0;
	scanf("%d",&num);
	armat(num);
	return 0;
}


int armat(int num){

	for(int i = 1;i <= num/2;++i){
		if(num / i == i && num % i == 0){
			printf("%d-i armaty havasar e %d",num,i);
			return i;
		}
	
	}
	printf("tivy armat chuni\n");
}
