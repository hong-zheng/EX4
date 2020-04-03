#include<stdio.h>
#include<stdlib.h>
void Print(int* arr,int len){
	for(int i = 0;i<len;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void selectSort(int* arr,int len){
	for(int i = 0 ;i<len;i++){
		int min = arr[i];
		int flag = -1;
		for(int j = i+1;j<len;j++){
			if( min > arr[j]){
				min = arr[j];
				flag = j;
			}
		}
                if(flag > 0){
			arr[flag] = arr[i];
			arr[i] = min;
		}
	}
}
int main(){
	
	int arr[] = {3,2,0,4,91,723,42,57,57,878,21,961,95,8};
	int len = sizeof(arr)/sizeof(arr[0]);
	Print(arr,len);
	selectSort(arr,len);
	Print(arr,len);
	return 0;
}
