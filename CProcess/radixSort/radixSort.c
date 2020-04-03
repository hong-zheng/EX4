#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Print(int* arr,int len){
	for(int i = 0 ;i<len;i++){
		printf("%d  ",arr[i]);
	}
	printf("\n");
}
#define MAXNUM 999
void radixSort(int* arr,int len){
	int tmp[MAXNUM+1];
	memset(tmp,0,sizeof(int)*(MAXNUM+1));
	for(int  i=0;i<len;i++){
		tmp[arr[i]]++;
	}
	for(int i = 0;i<MAXNUM+1;i++){
		while(tmp[i]--){
			printf("%d ",i);
		}
	}
	printf("\n");
}

int main(){
	int arr[] = {999,37,289,68,217,6,43,72,35,9,5,5,10};
	int len = sizeof(arr)/sizeof(arr[0]);
	Print(arr,len);
	radixSort(arr,len);
	Print(arr,len);
	return 0;
}
