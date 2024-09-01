#include <stdio.h>

int checkperfectnum(int number){
	int check = 1;
	for(int i = 2;i < number;++i){
		if (number % i == 0){
			check += i;
		}
		
	}
	return check;

}


int main(){

	int num = 0;
	scanf("%d",&num);
	int result = checkperfectnum(num);

	if(result == num){
		printf("%d is perfect number",result);
	}
	
	else{
		printf("perfect number chi");
	}


return 0;
}
