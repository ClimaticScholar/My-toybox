#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void gausselimination(int n, float a[][SIZE], float x[]){
	float ratio;
	int i,j,k;
	for(i=0;i<n-1;i++){
		if(a[i][i]==0.0){
			printf("Mathematical error");
			exit(0);
		}
		for(j=i+1;j<n;j++){
			ratio=a[j][i]/a[i][i];
			for(k=i;k<=n;k++){
				a[j][k]-=ratio*a[i][k];
			}
		}	
	}
	x[n-1]=a[n-1][n]/a[n-1][n-1];
	for(i=n-2;i>=0;i--){
		x[i]=a[i][n];
		for(j=i+1;j<n;j++){
			x[i]-=a[i][j]*x[j];
		}
		x[i]/=a[i][i];
	}
}
int main(){
	int n,i,j;
	float a[SIZE][SIZE],x[SIZE];
	printf("Enter the number of unknowns :");
	scanf("%d",&n);
	printf("Enter values for augmented matrix :\n");
	for(i=0; i<n ; i++){
		for(j=0; j<=n; j++){
			printf("a[%d][%d]=",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
	gausselimination(n,a,x);
	printf("The value of the unknowns are :\n");
	for(i=0; i<n; i++){
		printf("x%d=%0.3f ",i+1,x[i]);
	}
	return 0;
}

