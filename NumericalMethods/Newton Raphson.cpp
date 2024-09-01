#include <stdio.h>
#include <math.h>

float f(float x) {
    return (pow(x, 3) - 3 * x - 5);
}
float df(float x){
	return (3*pow(x,2)-3);
}

int main() {
    float a, b, x1, x0, e;
    int i = 0;
    do {
        printf("Enter a: ");
        scanf("%f", &a);
        printf("Enter b: ");
        scanf("%f", &b);
    } while (f(a) * f(b) > 0);

    printf("Enter tolerable error: ");
    scanf("%f", &e);
    printf("\nITN\txn\txn+1\n");
    x0 = (a + b) / 2.0;

    do {
        x1 = x0 - (f(x0) / df(x0));
        printf("\n%d\t%f\t%f", i, x0, x1);
        x0 = x1;
        i++;
    } while (fabs(f(x1)) > e);
    printf("\nThe root is: %0.3f", x1);
    return 0;
}

