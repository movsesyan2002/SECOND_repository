#include <stdio.h>
#define SIZE 10
int bs_rec(int* arr, int start, int end, int target)
{
		if(start > end) 
		{
				return -1;
		}
		int mid = start + (end - start)/2;		
		if(arr[mid] == target) {
				return mid;
		}
		if (arr[mid] > target){
			return bs_rec(arr, start, mid - 1, target);	
		}
		return bs_rec(arr, mid + 1, end, target);
}

int main(){

	int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10};
	int target = 4;
	int index = bs_rec(arr, 0, SIZE -1, target);
	printf("%d\n", index);
return 0;	
}
