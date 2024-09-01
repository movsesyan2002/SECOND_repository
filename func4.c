#include <stdio.h>
int fibon(int index);

int main(){

	int num = 0;
	scanf("%d",&num);
	int res = fibon(num);
	printf("num is %d\n",res);

return 0;
}

int fibon(int index){

	if(index == 0){
		return 0;
	}
	else if(index == 1){
		return 1;
	}

	int first = 0;
	int second = 1;
	int next = 0;
	for(int i = 2;i <= index;++i){
		next = first + second;
		first = second;
		second = next;
	}
return next;
}
