#include<stdio.h>
#include<math.h>
float f(float x){
	return (3*x-cos(x)-1);
}
int main(){
	float a,b,c,e;
	int i=0;
	do{
		printf("Enter a :");
		scanf("%f",&a);
		printf("Enter b :");
		scanf("%f",&b);
	}while(f(a)*f(b)>0);
	printf("Enter tolerable error :");
	scanf("%f",&e);
	printf("\nITN\t\ta\t\tb\t\tc\n");
	do{
		c=((a*f(b))-(b*f(a)))/(f(b)-f(a));
		printf("\n%d\t%f\t%f\t%f",i,a,b,c);
		if(f(a)*f(c)<0)
			b=c;
		else
			a=c;
		i++;
	}while(fabs(f(c))>e);
	printf("\nThe root is : %0.3f",c);
	return 0;
}
