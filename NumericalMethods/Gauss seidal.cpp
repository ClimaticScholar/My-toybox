#include<stdio.h>
#include<math.h>
#define f1(x,y,z) (7+y)/2
#define f2(x,y,z) (1+x+z)/2
#define f3(x,y,z) (1+y)/2 
int main(){
	int i=1;
	float x0=0,y0=0,z0=0,e,e1,e2,e3,x1,y1,z1;
	printf("Enter tolerable error :");
	scanf("%f",&e);
	printf("Gauss Seidel Iteration Method :\n");
	printf("i\tx\ty\tz\n");
	printf("0\t0\t0\t0\n");
	do{
		x1=f1(x0,y0,z0);
		y1=f2(x1,y0,z0);
		z1=f3(x1,y1,z0);
		printf("%d\t%0.3f\t%0.3f\t%0.3f\n",i,x1,y1,z1);
		e1=fabs(x0-x1);
		e2=fabs(y0-y1);
		e3=fabs(z0-z1);
		x0-x1;
		y0=y1;
		z0=z1;
		i++;
	}while(e1>e&&e2>e&&e3>e);
	return 0;
}
