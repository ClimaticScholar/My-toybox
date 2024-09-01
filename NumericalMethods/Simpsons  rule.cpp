#include<stdio.h>
#include<math.h>
float f(float x){
	return (x*sin(x)+pow(x,3));
}
int main(){
	int n;
	float a,b,h,sum=0.0,I;
	printf("Enter no.of sub-intervals :");
	scanf("%d",&n);
	printf("Enter lower limit :");
	scanf("%f",&a);
	printf("Enter upper limit :");
	scanf("%f",&b);
	h=(b-a)/n;
	sum=f(a)+f(b);
	for(int i=1;i<n;i++){
		if(i%2==0)
			sum=sum+2*f(a+i*h);
		else 
			sum=sum+4*f(a+i*h);
	}
	I=(h/3)*sum;
	printf("The value of integration is : %0.3f",I);
	return 0;
}
