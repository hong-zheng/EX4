#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Print(int* arr,int len){
	while(len--){
		printf("%d ",arr[len]);
	}
	printf("\n");
}
// xian gui bing
void merge(int* arr,int l,int m,int r){
	int left = l;
	int right = m+1;
	int len = r - l + 1;
	int k = 0;
	int* newArr = (int*)malloc(sizeof(int)*len);
	while( left <= m && right <= r){
		if( arr[left] < arr[right] ){
		  newArr[k++] = arr[left++];
		}else{
		  newArr[k++] = arr[right++];
		}
	}
	while( left <= m){
		newArr[k++] = arr[left++];
	}
	while( right<=r){
		newArr[k++] = arr[right++];
	}
	memcpy(arr+l,newArr,len*sizeof(int));
	free(newArr);
	newArr = NULL;
}
// zai chai fen
void chaifen(int* arr,int l,int r){
	if( l == r){
		return ;	
	}
	int m = l + (r-l)/2;
	chaifen(arr,l,m);
	chaifen(arr,m+1,r);
	merge(arr,l,m,r);
}
void MERGE(int* arr,int len){
	chaifen(arr,0,len-1);
}
int main(){
 int arr[]  = {4,8,59,8,90,1,29,70,26,75,7,89,2};
 int len = sizeof(arr)/sizeof(arr[0]);
 Print(arr,len);	
 MERGE(arr,len);
 Print(arr,len);
 return 0;
}
