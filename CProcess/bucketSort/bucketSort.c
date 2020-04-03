#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void Print(int* arr,int len){
	for(int i = 0;i<len;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
#define LEN 10
#define MAX 999
void bucketSort(int* arr,int len){
	for(int i = 1;i<MAX;i*=10){
		int tmp[10][LEN];
		memset(tmp,-1,sizeof(int)*10*LEN);
		for(int j = 0 ;j<len;j++){
			int m = arr[j]/i%10;
			tmp[m][j] = arr[j];
		}
		int k = 0;
		for(int i = 0;i<10;i++){
			for(int j = 0;j<len;j++){
				if(-1 != tmp[i][j]){
					arr[k++] = tmp[i][j];
				}
			}
		}
	}
}
int main(){

	int arr[] = {999,1,3,234,54,65,89,65,66,5};
	Print(arr,LEN);
	bucketSort(arr,LEN);
	Print(arr,LEN);
	return 0;
}
