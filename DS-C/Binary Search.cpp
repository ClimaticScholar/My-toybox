#include<stdio.h>
int binarysearch(int x,int f, int l,int a[]){
	int m;
	while(f<=l){
		m=(l+f)/2;
		if(x==a[m]){
			return m;	
		}
		if(x<a[m])
			return binarysearch(x,f,m-1,a);
		return binarysearch(x,m+1,l,a);
	}
}
int main(){
    int a[10] = {2, 5, 12, 15, 23, 24, 55, 69, 70, 89};
    int f, m, l, flag = 0, x;
    printf("Enter element to be searched: ");
    scanf("%d", &x);
    f = 0;
    l = 9;
    int result=binarysearch(x,f,l,a);
    printf("%d",result);
    return 0;
}


