#include<stdio.h>
#include<stdlib.h>
void Print(int* arr,int len){
	while(len--){
		printf("%d ",arr[len]);
	}
	printf("\n");
}

// insert sort 
void insertSort(int* arr,int len){
	for(int i=1;i<len;i++){
		int cur  = arr[i];
		int j = 0;
		for(j = i-1;j>=0 && cur<arr[j];j--){
			arr[j+1] = arr[j];
		}
		arr[j+1] = cur;
	}
}

int main(){
	int arr[] = {8,5,2,7,9,10,0,2,93,4,27,85,17,37,81};
	int len = sizeof(arr)/sizeof(arr[0]);
	Print(arr,len);
	insertSort(arr,len);
	Print(arr,len);
	return 0 ;
}
