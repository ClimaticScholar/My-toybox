// QUICKSORT //
#include<stdio.h>
#define INF 9999999
void swap(int *a, int *b){
	int c;
	c=*a;
	*a = *b;
	*b = c;
}
int partition(int l,int h,int arr[]){
	int i=l;
	int j=h;
	int pivot = arr[i];
	while(i<j){
		do{
			i++;
		}while(arr[i]<=pivot);
		do{
			j--;
		}while(arr[j]>pivot);
		if(i<j){
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[l],&arr[j]);
	return j;
}
void Quicksort(int l, int h,int arr[]){
	if(l<h){
		int j=partition(l,h,arr);
		Quicksort(l,j,arr);
		Quicksort(j+1,h,arr);
	}
}
int main(){
	int a[10]={19,17,15,12,16,18,4,11,13,INF};
	int l=0,h=9;
	Quicksort(l,h,a);
	for(int i=0;i<9;i++){
		printf("\n%d",a[i]);
	}
	return 0;
	
}	
