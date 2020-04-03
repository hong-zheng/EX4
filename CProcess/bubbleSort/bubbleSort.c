#include<stdio.h>
#include<stdlib.h>
void Print(int* arr,int len){
	for(int  i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void bubbleSort(int* arr,int len){
	for(int i = 0;i<len-1;i++){
		for(int j = 0 ;j<len-i-1;j++){
			if( arr[j+1] > arr[j]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

int main(){
   int arr[] = {45,8,0,9,1,2,9,7,5,9,2,8,1,5,3,2};
   int len = sizeof(arr)/sizeof(arr[0]);
   Print(arr,len);
   bubbleSort(arr,len);
   Print(arr,len);
   return 0;
}
