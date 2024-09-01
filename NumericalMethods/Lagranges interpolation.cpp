#include<stdio.h>
float f ( float xn,float n, float x[], float y[]){
	
	float term=1.0,sum=0.0;
	for(int i=0;i<n;i++){
		for(int j=0; j<n ;j++){
			if(i!=j)
				term*=(xn-x[j])/(x[i]-x[j]);
		}
		sum+=(term*y[i]);
		term=1.0;
	}
	return sum;
}
int main(){
	float x[10],y[10],xn;;
	int n;
	printf("Enter n :");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter value of x :\n");
		scanf("%f",&x[i]);
		printf("Enter values of y :\n");
		scanf("%f",&y[i]);
	}
	printf("Enter the required value of x :");
	scanf("%f",&xn);
	printf("The value of y at x=%0.0f is %0.3f",xn,f(xn,n,x,y));
	return 0;
}
