#include <stdio.h>

int fibon(int index){
	
	if(index == 0){
		return 0;
	}
	if(index == 1){
		return 1;
	}

return fibon(index - 1) + fibon(index - 2);
}

int main(){
	
	int index = 0;
	scanf("%d",&index);
	printf("%d",fibon(index));

return 0;

}


