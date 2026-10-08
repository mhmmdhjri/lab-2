#include <stdio.h>
#include <stdlib.h>

void solve(int caseNum) {
    int n;
    scanf("%d", &n);

 
    long long *x = (long long *)malloc(n * sizeof(long long));
    long long *y = (long long *)malloc(n * sizeof(long long));

 
    for (int i = 0; i < n; i++) {
        scanf("%lld", &x[i]);
    }
 
    for (int i = 0; i < n; i++) {
        scanf("%lld", &y[i]);
    }

    int failedCount = 0;
 
    for (int i = 0; i < n; i++) {
        if (x[i] < y[i]) {
            failedCount++;
        }
    }

    
    printf("Case #%d: %d\n", caseNum, failedCount);
 
    free(x);
    free(y);
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        solve(i);
    }

    return 0;
}

