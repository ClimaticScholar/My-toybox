#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool place(int k, int i, int x[]) {
    for (int j = 0; j < k; j++) {  // Change loop to start from 0
        if ((x[j] == i) || (abs(x[j] - i) == abs(j - k)))  // Correct comparison and indexing
            return false;
    }
    return true;
}

void Nqueen(int k, int n, int x[]) {
    for (int i = 0; i < n; i++) {  // Change loop to start from 0 to n-1
        if (place(k, i, x)) {
            x[k] = i;
            if (k == n - 1) {  // Base case check
                printf("%d tuple solution is: ", n);
                for (int j = 0; j < n; j++) {
                    printf("%d ", x[j] + 1);  // Print 1-based index for readability
                }
                printf("\n");
            } else {
                Nqueen(k + 1, n, x);  // Recursive call
            }
        }
    }
}

int main() {
    int n, x[20];
    printf("Enter number of queens: ");
    scanf("%d", &n);
    Nqueen(0, n, x);  // Start from 0 instead of 1
    return 0;
}

