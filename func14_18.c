#include <stdio.h>
void prt_arr(int arr[],int n,int id);

int main(){
	
	int size = 0;
	scanf("%d",&size);
	int arr[size];
	for(int i = 0;i < size;++i){
		scanf("%d",&arr[i]);
	}
	prt_arr(arr,size-1,0);
	printf("\n");
}


void prt_arr(int arr[],int n,int id){
	if(id <= n){
		printf("%d ",arr[id]);
		prt_arr(arr,n,id+1);
		//printf("%d ",arr[id]);//kgri hakarak hertakanutyamb
	}
}

