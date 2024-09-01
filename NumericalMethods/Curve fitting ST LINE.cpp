#include<stdio.h>
#define SIZE 10

int main() {
    float x[SIZE], y[SIZE], sumx=0.0, sumy=0.0, sumxy=0.0, sumxx=0.0, a, b;
    int i, n;
    
    printf("Enter n (up to %d): ", SIZE);
    scanf("%d", &n);
    
    if(n > SIZE) {
        printf("Error: n exceeds the predefined size limit (%d).\n", SIZE);
        return 1;
    }
    
    printf("Enter x: ");
    for(i = 0; i < n; i++) {
        scanf("%f", &x[i]);
    }
    
    printf("Enter y: ");
    for(i = 0; i < n; i++) {
        scanf("%f", &y[i]);
    }
    
    for(i = 0; i < n; i++) {
        sumx += x[i];
        sumy += y[i];
        sumxy += x[i] * y[i];
        sumxx += x[i] * x[i];
    }
    
    b = (n * sumxy - sumx * sumy) / (n * sumxx - sumx * sumx);
    a= (sumy-b*sumx)/n;
    
    printf("a = %f, b = %f\n", a, b);
    
    return 0;
}

