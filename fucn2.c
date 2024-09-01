#include <stdio.h>

int astichan(int num,int ast);

int main(){
	
	int num = 0;
	int ast = 0;
	scanf("%d",&num);
	scanf("%d",&ast);
	printf("%d-i %d astichany = %d\n",num,ast,astichan(num,ast));

}



int astichan(int num,int ast){
	int res = 1;
	
	while(ast > 0){
		res *= num;
		ast--;
	}

	return res;
	
}
