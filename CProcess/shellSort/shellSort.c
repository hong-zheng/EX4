#include<stdio.h>
#include<stdlib.h>
void Print(int* arr,int len){
	for(int i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void shellSort(int* arr,int len){
	int step  = len/2;
	while( step >= 1){
		for(int i = step ;i<len;i++){
			for(int j = 1;j<len;j++){
				int k = 0;
				int cur = arr[j];
				for(k = j - step;k>=0 && cur<arr[k];k-=step){
					arr[k+step] = arr[k];
				}
				arr[k+step] = cur;
			}
		}
		step/=2;
	}
}

int main(){
	int arr[] = {5,2,6,7,5,82,0,4,3,8,7,9,1,2,1};
	int len = sizeof(arr)/sizeof(arr[0]);
	Print(arr,len);
	shellSort(arr,len);
        Print(arr,len);
	return 0;
}
