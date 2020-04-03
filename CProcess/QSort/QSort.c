#include<stdio.h>
#include<stdlib.h>

void Print(int* arr,int length){
	while(length--){
		printf("%d ",arr[length]);
	}	
	printf("\n");
}
// piv
int piv(int* arr , int l , int h){
	int indx = arr[l];
	while(l < h){
		while( l < h && arr[h] >= indx){
			h--;
		}
		arr[l] = arr[h];
		while( l < h && arr[l] < indx){
		       l++;	
	        }
		arr[h] = arr[l];
	}
       arr[l] = indx;
       return l;
}
void QSort(int* arr,int l,int h){
	if( l < h){
		int pivindx = piv(arr,l,h);
		QSort(arr , l ,  pivindx-1);
		QSort(arr , pivindx+1, h);
	}
}
void QSORT(int* arr,int length){
	QSort(arr,0,length-1);	
}
int main(){
	
	int arr[] = {13,4,7,6,8,5,2,0,9,820,7,13,89,38,16,9};
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("before sort:\n");
	Print(arr,len);
	QSORT( arr , len );
	printf("after sort:\n");
	Print(arr,len);
	return 0;

}
