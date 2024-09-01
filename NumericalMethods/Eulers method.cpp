#include<stdio.h>
#include<math.h>
float f(float x, float y){
	return 8*x+pow(y,4);
}
int main(){
	float x0,y0,x1,y1,h;
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
		y1=y0+h*f(x0,y0);
		y0=y1;
		x0=x0+h;
		i++;
	}
	return 0;
	
}
