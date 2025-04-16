#include <stdio.h>
#include <limits.h>

int a[10], freq[10];
int n;

int sum(int i, int j) {
    int s = 0;
    for (int k = i; k <= j; k++) {
        s += freq[k];
    }
    return s;
}

int obst() {
    int o[n][n]; // Correct the size of the array

    for (int d = 0; d < n; d++) {
        for (int i = 0; i < n - d; i++) {
            int j = i + d;
            if (i == j) {
                o[i][j] = freq[i];
            } else {
                int min = INT_MAX;
                for (int k = i; k <= j; k++) {
                    int left = (k > i) ? o[i][k - 1] : 0;
                    int right = (k < j) ? o[k + 1][j] : 0;
                    int val = left + right + sum(i, j);
                    if (val < min) {
                        min = val;
                    }
                }
                o[i][j] = min;
            }
        }
    }
    return o[0][n - 1];
}

void main() {
    printf("Enter the number of matrices: ");
    scanf("%d", &n);
    printf("Enter elements and frequencies: ");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i], &freq[i]);
    }
    int minSearchCost = obst();
    printf("Minimum search cost: %d\n", minSearchCost);
}
