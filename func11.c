	#include <stdio.h>

void rec_prt_num(int num,int art);

int main(){
		
	int num = 0;
	scanf("%d",&num);
	int art = 1;
	int tmp = num;
	while(tmp/10 != 0){
		tmp /= 10; 
		art *= 10;
	rec_prt_num(num,art);
	printf("\n");
	return 0;
	}
}
void rec_prt_num(int num,int art){
	
/*	int art = 1;
	int tmp = num;
	while(tmp/10 != 0){
		tmp /= 10; 
		art *= 10;
	} */ 

	if(num != 0 && art != 0){
		printf("%d",num/art);
		rec_prt_num(num%art,art/10);
		
	
	}
}
