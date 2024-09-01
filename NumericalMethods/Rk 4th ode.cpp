#include<stdio.h>
#include<math.h>
float f(float x, float y){
	return 3*x+pow(y,2);
}
int main(){
	float x0,y0,x1,h,k1,k2,k3,k4;
	int i=0;
	printf("Enter value of x0 : ");
	scanf("%f",&x0);
	printf("Enter value of y0 : ");
	scanf("%f",&y0);
	printf("Enter value of xn : ");
	scanf("%f",&x1);
	printf("Enter step length : ");
	scanf("%f",&h);
	while(x0<x1){
		printf("\nAt n=%d the value of y is : %0.3f",i,y0);
		k1=h*f(x0,y0);
		k2=h*f(x0+h/2,y0+k1/2);
		k3=h*f(x0+h/2,y0+k2/2);
		k4=h*f(x0+h,y0+k3);
		y0=y0+(k1+2*k2+2*k3+k4)/6;
		x0=x0+h;
		i++;
	}
	return 0;
	
}
