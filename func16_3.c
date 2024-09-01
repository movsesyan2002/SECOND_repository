#include <stdio.h>

int main(){

	int size = 0;
	scanf("%d",&size);
	int arr[size];
	for(int i = 0;i < size;++i){
		scanf("%d",&arr[i]);//12145145
	}
		int count = 0;	
			int b = 0;	
	for(int i = 0;i < size;){
		for(int j = i+1;j < size;++j){
			if((arr[i]|arr[j])!=arr[j]){
				count++;
				 b = i;
			}
			else{
				 b = 0;
				count = 0;
				++i;	
			}
		}	
	}

	if(count){
		printf("%d\n",arr[b]);

	}
	else if(count == 0){
		printf("chka\n");
	}
	return 0;
}

